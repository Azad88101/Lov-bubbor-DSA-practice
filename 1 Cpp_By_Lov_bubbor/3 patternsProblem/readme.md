# Patterns Problem Module

This folder contains C++ programs for printing various patterns using loops. The patterns are divided into two categories: **Simple Patterns** and **Fancy Patterns**.

---

## Simple Patterns

These files demonstrate basic pattern printing using nested loops.

### 1. `1st.cpp`
**Purpose:**  
Prints a basic pattern, such as a square or rectangle of stars or numbers.

### 2. `diamond.cpp`
**Purpose:**  
Prints a diamond shape using stars (`*`).

### 3. `flipSolidDiamond.cpp`
**Purpose:**  
Prints a flipped solid diamond pattern.

### 4. `halloHalfTringle.cpp`
**Purpose:**  
Prints a hollow half triangle pattern.

### 5. `hallowdiamaond.cpp`
**Purpose:**  
Prints a hollow diamond pattern.

### 6. `hallowSquare.cpp`
**Purpose:**  
Prints a hollow square pattern.

### 7. `hollownumberHalfPyramid.cpp`
**Purpose:**  
Prints a hollow numeric half pyramid.

### 8. `normalNOpatt.cpp`, `paten.cpp`, `pattern2.cpp`, `pyramidOFnumbers.cpp`, `revtriangle.cpp`, `tri.cpp`, `triangle.cpp`, `tringle.cpp`
**Purpose:**  
Each file prints a different simple pattern (such as triangles, pyramids, rectangles, etc.) using loops.

---

## Fancy Patterns

These are more complex patterns, often involving numbers and creative arrangements.

### 1. `fancyPattern/fancypattern1.cpp`
**Purpose:**  
Prints a fancy pattern, such as a symmetric numeric pyramid or a pattern with special formatting.

### 2. `fancyPattern/hollaoNumericPyramid.cpp`
**Purpose:**  
Prints a hollow numeric pyramid.

### 3. `fancyPattern/pyramidOFNUmber2.cpp`
**Purpose:**  
Prints another version of a numeric pyramid with a unique arrangement.

---

## How Pattern Printing Code Works

Pattern printing in C++ is mostly done using **nested loops**. The outer loop controls the number of rows, and the inner loop controls what is printed in each column of a row.

### Example: Printing a Square of Stars

```cpp
int n = 5;
for (int i = 0; i < n; i++) {           // Outer loop for rows
    for (int j = 0; j < n; j++) {       // Inner loop for columns
        cout << "* ";
    }
    cout << endl;
}
```
**Output:**
```
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
```

---

### Example: Printing a Hollow Square

```cpp
int n = 5;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (i == 0 || i == n-1 || j == 0 || j == n-1)
            cout << "* ";
        else
            cout << "  ";
    }
    cout << endl;
}
```
**Output:**
```
* * * * * 
*       * 
*       * 
*       * 
* * * * * 
```

---

### Example: Fancy Numeric Pyramid

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int space = 1; space <= n-i; space++)
        cout << "  ";
    for (int num = 1; num <= 2*i-1; num++)
        cout << num << " ";
    cout << endl;
}
```
**Output:**
```
        1 
      1 2 3 
    1 2 3 4 5 
  1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9 
```

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

- **Simple Patterns:**  
  Learn the basics of nested loops and conditional logic for pattern printing.
- **Fancy Patterns:**  
  Practice more advanced logic for creative and symmetric patterns.

Explore each file for different pattern ideas and improve your loop and logic