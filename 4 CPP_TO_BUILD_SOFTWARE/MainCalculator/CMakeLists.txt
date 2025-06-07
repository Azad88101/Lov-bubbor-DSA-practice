cmake_minimum_required(VERSION 3.10)
project(CalculatorApp)

include_directories(calculator/include)

add_executable(calc
    main.cpp
    calculator/src/calculator.cpp
)
