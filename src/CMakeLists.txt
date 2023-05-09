cmake_minimum_required (VERSION 3.8)

add_library(src STATIC
    main.cpp
)

target_include_directories(src PUBLIC 
                            src)
                            
add_executable (App
    main.cpp
)
