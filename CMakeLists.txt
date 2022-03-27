cmake_minimum_required(VERSION 3.20)
project(ftxui_webassembly)

set(CMAKE_CXX_STANDARD 20)
include(FetchContent)
include(CTest)
include(cmake/CPM.cmake)
include(cmake/fetch-ftxui.cmake)

add_executable(ftxui_webassembly main.cpp)
target_link_libraries(ftxui_webassembly
        PRIVATE ftxui::screen
        PRIVATE ftxui::dom
        PRIVATE ftxui::component)

if (EMSCRIPTEN)
    # 32MB should be enough to run all the examples, in debug mode.
    target_link_options(component PUBLIC "SHELL: -s TOTAL_MEMORY=33554432")
    foreach(file
            "./index.html"
            "./run_webassembly.py")
        configure_file(${file} ${file})
    endforeach(file)
endif()