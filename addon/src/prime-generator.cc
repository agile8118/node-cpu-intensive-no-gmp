#include <iostream>
#include <climits>
#include <iomanip>
#include <stdbool.h>
#include <thread>
#include <mutex>
#include <algorithm>
#include "prime-generator.h"

// Function to check if a number is prime
bool isPrime(unsigned long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (unsigned long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Function to find the next prime number after a given number
unsigned long long nextPrime(unsigned long long n) {
    if (n <= 1) return 2;
    unsigned long long prime = n;
    bool found = false;

    while (!found) {
        prime++;
        if (isPrime(prime)) {
            found = true;
        }
    }
    return prime;
}

// Function to format a number with commas every three digits
std::string formatNumberWithCommas(unsigned long long number) {
    std::string num_str = std::to_string(number);
    int insert_position = num_str.length() - 3;
    while (insert_position > 0) {
        num_str.insert(insert_position, ",");
        insert_position -= 3;
    }
    return num_str;
}

// Function to generate primes
std::vector<std::string> generatePrimes(int count, unsigned long long startingNumber, bool format, bool log) {
    std::vector<std::string> primes;

    unsigned long long prime = nextPrime(startingNumber);
    primes.push_back(format ? formatNumberWithCommas(prime) : std::to_string(prime));

    for (int i = 1; i < count; i++) {
        prime = nextPrime(prime);
        std::string prime_str = format ? formatNumberWithCommas(prime) : std::to_string(prime);
        if (log) std::cout << prime_str << std::endl;
        primes.push_back(prime_str);
    }

    return primes;
}

std::vector<std::string> generatePrimesThreads(int threadCount, int primeCount, const std::string startValue, bool format, bool log) {
    std::vector<std::thread> threads;
    std::vector<std::string> result;
    std::mutex resultMutex;

    auto calc = [&](int count, unsigned long long start, bool format, bool log) {
        // Generate primes
        auto primes = generatePrimes(count, start, format, log);
        // Lock the mutex before modifying the shared result vector
        {
            std::lock_guard<std::mutex> lock(resultMutex);
            result.insert(result.end(), primes.begin(), primes.end());
        }
        };

    for (int i = 0; i < threadCount; ++i) {
        unsigned long long updatedStartValue;
        try {
            updatedStartValue = std::stoull(startValue) + i * 3000;

            if (updatedStartValue > 10000000000000000000ULL) {
                std::cerr << "Error: The starting number exceeded 10,000,000,000,000,000,000. "
                    << "Please consider using the node-cpu-intensive repository with GMP support to be able to use arbitrarily large numbers." << std::endl;
                std::exit(EXIT_FAILURE);
            }
        }
        catch (...) {
            std::cerr << "An occurred while converting the starting number to an unsigned long long. Make sure your starting number doesn't exceed 10,000,000,000,000,000,000." << std::endl;
            std::exit(EXIT_FAILURE);
        }

        // Start the worker thread
        threads.push_back(std::thread(calc, primeCount / threadCount, updatedStartValue, format, log));
    }

    // Join all threads
    for (auto& thread : threads) {
        thread.join();
    }

    // Sort the results
    std::sort(result.begin(), result.end());

    return result;
}
