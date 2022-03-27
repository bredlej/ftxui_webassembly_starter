# ftxui_webassembly_starter
Starter project for creating FTXUI apps with WebAssembly target. 
Adapted from the examples at https://github.com/ArthurSonzogni/FTXUI

## How to start
1. Clone repository
2. Download & install EmscriptenSDK from https://emscripten.org
3. When invoking CMake specify the Emscripten Toolchain file to be used: `cmake . -DCMAKE_TOOLCHAIN_FILE=<YOUR PATH HERE>/emsdk/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake
-DPLATFORM=Web`
4. Compile and cd into build folder
5. Invoke `python3 ./run_webassembly.py`
6. Open your browser at http://localhost:8888
