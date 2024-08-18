#ifndef PRIME_GENERATOR_H
#define PRIME_GENERATOR_H

#include <vector>
#include <string>

// Function to check if a number is prime
bool isPrime(unsigned long long n);

// Function to find the next prime number after a given number
unsigned long long nextPrime(unsigned long long n);

// Function to format a number with commas every three digits
std::string formatNumberWithCommas(unsigned long long number);

// Function to generate a vector of prime numbers as strings
std::vector<std::string> generatePrimes(int count, unsigned long long startingNumber, bool format, bool log);

// Actual function to call when including the file
std::vector<std::string> generatePrimesThreads(int threadCount, int count, const std::string startingNumber, bool format, bool log);

#endif // PRIME_GENERATOR_H
