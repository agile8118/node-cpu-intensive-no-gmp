{
  "targets": [
    {
      "target_name": "heavy-lifter",
      "sources": [ "./addon/src/binding.cc", "./addon/src/prime-generator.cc" ],
      "include_dirs": [
        "<!@(node -p \"require('node-addon-api').include\")"
      ],
      "cflags": ["-fexceptions"],
      "cflags_cc": ["-fexceptions"],
      "dependencies": ["<!(node -p \"require('node-addon-api').gyp\")"],
      "xcode_settings": {
        "GCC_ENABLE_CPP_EXCEPTIONS": "YES",
        "CLANG_CXX_LIBRARY": "libc++",
        "MACOSX_DEPLOYMENT_TARGET": "14.0"
      },
      "msvs_settings": {
        "VCCLCompilerTool": { "ExceptionHandling": 1 }
      },
      "product_dir": "../build"
    }
  ]
}
