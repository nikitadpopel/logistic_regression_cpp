cmake_minimum_required (VERSION 3.8)

add_library(src STATIC
    main.cpp
    math_helpers.cpp
    math_helpers.h
)

target_link_libraries(src)

target_include_directories(src PUBLIC 
                            src)
                            
add_executable (App
    main.cpp
    math_helpers.cpp
    math_helpers.h
)
