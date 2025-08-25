# Functions Module

This folder contains C++ programs that demonstrate the use of functions for basic mathematical and conversion operations. Below is an explanation of each file and how the code works.

---

## 1. `add.cpp`
**Purpose:**  
Shows how to create and use a function to add two numbers.

**How it works:**  
Defines a function (e.g., `int add(int a, int b)`) that returns the sum of two integers.  
*Example Usage:*  
```cpp
int result = add(5, 7); // result = 12
```

---

## 2. `binaryTOdec.cpp`
**Purpose:**  
Converts a binary number (as input) to its decimal equivalent using a function.

**How it works:**  
Reads a binary number (as an integer or string), processes each digit, and calculates the decimal value using powers of 2.  
*Example:*  
Input: `1011`  
Output: `11`

---

## 3. `DecimalTObinary.cpp`
**Purpose:**  
Converts a decimal number to its binary representation using a function.

**How it works:**  
Reads a decimal number, repeatedly divides by 2, and stores remainders to build the binary string.  
*Example:*  
Input: `13`  
Output: `1101`

---

## 4. `sumofevenno.cpp`
**Purpose:**  
Calculates the sum of all even numbers up to a given limit using a function.

**How it works:**  
Defines a function that loops from 1 to `n`, adds even numbers, and returns the sum.  
*Example:*  
Input: `n = 10`  
Output: `30` (2 + 4 + 6 + 8 + 10)

---

## How to Run

1. Open any `.cpp` file in this folder.
2. Compile using:  
   ```
   g++ filename.cpp -o filename.exe
   ```
3. Run using:  
   ```
   filename.exe
   ```

---

## Summary

- Learn how to define and use functions in C++.
- Practice basic operations: addition, binary/decimal conversion, and summing even numbers.
- Each file demonstrates a specific function and its application.

Explore each file for detailed code examples and explanations. Happy coding!