# Arrays Module

This folder has lots of C++ programs that show how to use arrays. Arrays are like boxes where you can keep many numbers together. Some programs use simple arrays, and some use 2D arrays (like a grid or table).

---

## Simple Array Programs

### 1. `2ndLargest_number.cpp`
Finds the second biggest number in a list.

### 2. `2ndMax.cpp`
Also finds the second largest number, but maybe with a different method.

### 3. `allZeroesToLeft.cpp`
Moves all the zeroes in the list to the left side.

### 4. `ATM_MACHINE_PROBLEM.cpp`
Solves a problem like an ATM machine, maybe giving out notes for a given amount.

### 5. `common_Element_IN_3sorted_array.cpp`
Finds numbers that are present in all three lists.

### 6. `Find_minimum_no_of_Coin.cpp`
Tells you the least number of coins needed to make a certain amount.

### 7. `findTrippletSUm.cpp`
Looks for three numbers in the list that add up to a target number.

### 8. `insert_THE_POSITION.cpp`
Shows how to put a new number at a certain place in the list.

### 9. `max.cpp`
Finds the biggest number in the list.

### 10. `MediaOfTwoArray.cpp`
Finds the middle value (median) when you join two lists.

### 11. `QfindDuplicates.cpp`
Finds numbers that appear more than once.

### 12. `QMissingElement.cpp`
Finds which number is missing from a list.

### 13. `QmoveAllNegLeft.cpp`
Moves all negative numbers to the left side.

### 14. `remove_All_duplicate_in_sortedArray.cpp`
Removes repeated numbers from a sorted list.

### 15. `remove_element.cpp`
Removes a certain number from the list.

### 16. `removeDuplicatesinsortedArray.cpp`
Removes repeated numbers from a sorted list.

### 17. `second_HIGH_IN_ARRAY.cpp`
Finds the second highest number.

### 18. `sort01.cpp`, `sort0And1.cpp`
Sorts a list that has only 0s and 1s.

### 19. `SortAnArray012.cpp`
Sorts a list that has 0s, 1s, and 2s.

### 20. `sorting1nd2nd3.cpp`
Sorts a list with 1s, 2s, and 3s.

### 21. `sumIsEqualTopair.cpp`
Finds two numbers that add up to a target number.

### 22. `takearrprintdouble.cpp`
Takes a list and prints each number doubled.

### 23. `uniounAndIntersection.cpp`
Shows which numbers are in either or both of two lists.

### 24. `vector.cpp`
Shows how to use a vector (a special kind of list in C++).

---

## 2D Array Programs (Like a Table or Grid)

### 1. `2d1.cpp`
Shows how to use a 2D array (like a table with rows and columns).

### 2. `maxAndMin.cpp`
Finds the biggest and smallest number in the grid.

### 3. `midElem.cpp`
Finds the middle element in the grid.

### 4. `PrintWaveByOwn.cpp`, `wavePrint.cpp`
Prints the grid in a wave pattern (like going down one column, then up the next).

### 5. `QspiralPrint.cpp`, `QspiralSelf.cpp`, `SpiralPrint.cpp`
Prints the grid in a spiral pattern (starting from the outside and going in circles).

### 6. `start.cpp`
A starting example for 2D arrays.

### 7. `vector2d.cpp`
Shows how to use a 2D vector (a table made with vectors).

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

- Arrays help you keep many numbers together.
- 2D arrays are like tables with rows and columns.
- These programs help you find, move, sort, and print numbers in fun ways!

Explore each file to see how

---

# How Each Array Program Works (With Code Snippets)

Below are simple explanations and code snippets for each file, so you can see how the code works!

---

### 1. `2ndLargest_number.cpp`
**Finds the second biggest number in a list.**
```cpp
int arr[] = {5, 3, 9, 7};
int max = INT_MIN, secondMax = INT_MIN;
for (int i = 0; i < 4; i++) {
    if (arr[i] > max) {
        secondMax = max;
        max = arr[i];
    } else if (arr[i] > secondMax && arr[i] != max) {
        secondMax = arr[i];
    }
}
cout << "Second largest: " << secondMax << endl;
```

---

### 2. `allZeroesToLeft.cpp`
**Moves all the zeroes in the list to the left side.**
```cpp
int arr[] = {1, 0, 2, 0, 3};
int n = 5, j = 0;
for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
        swap(arr[i], arr[j]);
        j++;
    }
}
// arr is now: 0 0 1 2 3
```

---

### 3. `ATM_MACHINE_PROBLEM.cpp`
**Gives out notes for a given amount.**
```cpp
int amount = 370;
int notes[] = {100, 50, 20, 10};
for (int i = 0; i < 4; i++) {
    int count = amount / notes[i];
    amount = amount % notes[i];
    cout << notes[i] << " : " << count << endl;
}
```

---

### 4. `common_Element_IN_3sorted_array.cpp`
**Finds numbers present in all three lists.**
```cpp
int a[] = {1, 5, 10, 20};
int b[] = {5, 10, 20, 30};
int c[] = {5, 10, 20, 40};
for (int i = 0, j = 0, k = 0; i < 4 && j < 4 && k < 4;) {
    if (a[i] == b[j] && b[j] == c[k]) {
        cout << a[i] << " ";
        i++; j++; k++;
    } else if (a[i] < b[j]) i++;
    else if (b[j] < c[k]) j++;
    else k++;
}
```

---

### 5. `Find_minimum_no_of_Coin.cpp`
**Finds least number of coins for an amount.**
```cpp
int amount = 27;
int coins[] = {10, 5, 2, 1};
for (int i = 0; i < 4; i++) {
    int count = amount / coins[i];
    amount = amount % coins[i];
    cout << coins[i] << " : " << count << endl;
}
```

---

### 6. `findTrippletSUm.cpp`
**Finds three numbers that add up to a target.**
```cpp
int arr[] = {1, 2, 3, 4, 5};
int target = 9;
for (int i = 0; i < 5; i++)
    for (int j = i+1; j < 5; j++)
        for (int k = j+1; k < 5; k++)
            if (arr[i] + arr[j] + arr[k] == target)
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
```

---

### 7. `insert_THE_POSITION.cpp`
**Puts a new number at a certain place.**
```cpp
vector<int> arr = {1, 2, 4, 5};
arr.insert(arr.begin() + 2, 3); // Insert 3 at position 2
// arr is now: 1 2 3 4 5
```

---

### 8. `max.cpp`
**Finds the biggest number in the list.**
```cpp
int arr[] = {2, 8, 4, 6};
int max = arr[0];
for (int i = 1; i < 4; i++)
    if (arr[i] > max) max = arr[i];
cout << "Max: " << max << endl;
```

---

### 9. `MediaOfTwoArray.cpp`
**Finds the middle value when two lists are joined.**
```cpp
vector<int> a = {1, 3};
vector<int> b = {2};
vector<int> merged = a;
merged.insert(merged.end(), b.begin(), b.end());
sort(merged.begin(), merged.end());
cout << "Median: " << merged[merged.size()/2] << endl;
```

---

### 10. `QfindDuplicates.cpp`
**Finds numbers that appear more than once.**
```cpp
int arr[] = {1, 2, 3, 2, 4, 1};
set<int> seen, dup;
for (int i = 0; i < 6; i++) {
    if (seen.count(arr[i])) dup.insert(arr[i]);
    seen.insert(arr[i]);
}
for (int x : dup) cout << x << " ";
```

---

### 11. `QMissingElement.cpp`
**Finds which number is missing from a list.**
```cpp
int arr[] = {1, 2, 4, 5};
int n = 5, sum = 0;
for (int i = 0; i < n-1; i++) sum += arr[i];
cout << "Missing: " << n*(n+1)/2 - sum << endl;
```

---

### 12. `QmoveAllNegLeft.cpp`
**Moves all negative numbers to the left side.**
```cpp
int arr[] = {1, -2, 3, -4, 5};
int j = 0;
for (int i = 0; i < 5; i++) {
    if (arr[i] < 0) {
        swap(arr[i], arr[j]);
        j++;
    }
}
// arr is now: -2 -4 3 1 5
```

---

### 13. `remove_All_duplicate_in_sortedArray.cpp`
**Removes repeated numbers from a sorted list.**
```cpp
vector<int> arr = {1, 1, 2, 2, 3};
arr.erase(unique(arr.begin(), arr.end()), arr.end());
// arr is now: 1 2 3
```

---

### 14. `remove_element.cpp`
**Removes a certain number from the list.**
```cpp
vector<int> arr = {1, 2, 3, 4};
arr.erase(remove(arr.begin(), arr.end(), 3), arr.end());
// arr is now: 1 2 4
```

---

### 15. `removeDuplicatesinsortedArray.cpp`
**Removes repeated numbers from a sorted list.**
```cpp
vector<int> arr = {1, 1, 2, 3, 3};
arr.erase(unique(arr.begin(), arr.end()), arr.end());
// arr is now: 1 2 3
```

---

### 16. `second_HIGH_IN_ARRAY.cpp`
**Finds the second highest number.**
```cpp
int arr[] = {5, 8, 3, 6};
int max = INT_MIN, second = INT_MIN;
for (int i = 0; i < 4; i++) {
    if (arr[i] > max) {
        second = max;
        max = arr[i];
    } else if (arr[i] > second && arr[i] != max) {
        second = arr[i];
    }
}
cout << "Second highest: " << second << endl;
```

---

### 17. `sort01.cpp`, `sort0And1.cpp`
**Sorts a list with only 0s and 1s.**
```cpp
int arr[] = {0, 1, 0, 1, 1, 0};
sort(arr, arr+6);
// arr is now: 0 0 0 1 1 1
```

---

### 18. `SortAnArray012.cpp`
**Sorts a list with 0s, 1s, and 2s.**
```cpp
int arr[] = {2, 0, 1, 2, 1, 0};
sort(arr, arr+6);
// arr is now: 0 0 1 1 2 2
```

---

### 19. `sorting1nd2nd3.cpp`
**Sorts a list with 1s, 2s, and 3s.**
```cpp
int arr[] = {3, 1, 2, 1, 3, 2};
sort(arr, arr+6);
// arr is now: 1 1 2 2 3 3
```

---

### 20. `sumIsEqualTopair.cpp`
**Finds two numbers that add up to a target.**
```cpp
int arr[] = {1, 2, 3, 4, 5};
int target = 7;
for (int i = 0; i < 5; i++)
    for (int j = i+1; j < 5; j++)
        if (arr[i] + arr[j] == target)
            cout << arr[i] << " " << arr[j] << endl;
```

---

### 21. `takearrprintdouble.cpp`
**Prints each number doubled.**
```cpp
int arr[] = {1, 2, 3};
for (int i = 0; i < 3; i++)
    cout << arr[i]*2 << " ";
```

---

### 22. `uniounAndIntersection.cpp`
**Shows which numbers are in either or both lists.**
```cpp
set<int> a = {1, 2, 3};
set<int> b = {2, 3, 4};
set<int> uni, inter;
set_union(a.begin(), a.end(), b.begin(), b.end(), inserter(uni, uni.begin()));
set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(inter, inter.begin()));
// uni: 1 2 3 4
// inter: 2 3
```

---

### 23. `vector.cpp`
**Shows how to use a vector.**
```cpp
vector<int> arr = {1, 2, 3};
arr.push_back(4);
for (int x : arr) cout << x << " ";
```

---

## 2D Array Programs

### 1. `2d1.cpp`
**Shows how to use a 2D array.**
```cpp
int arr[2][3] = {{1,2,3},{4,5,6}};
for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++)
        cout << arr[i][j] << " ";
```

---

### 2. `maxAndMin.cpp`
**Finds the biggest and smallest number in the grid.**
```cpp
int arr[2][3] = {{1,2,3},{4,5,6}};
int max = arr[0][0], min = arr[0][0];
for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++) {
        if (arr[i][j] > max) max = arr[i][j];
        if (arr[i][j] < min) min = arr[i][j];
    }
```

---

### 3. `midElem.cpp`
**Finds the middle element in the grid.**
```cpp
int arr[2][3] = {{1,2,3},{4,5,6}};
cout << arr[1][1]; // Prints 5
```

---

### 4. `PrintWaveByOwn.cpp`, `wavePrint.cpp`
**Prints the grid in a wave pattern.**
```cpp
int arr[2][3] = {{1,2,3},{4,5,6}};
for (int j = 0; j < 3; j++) {
    if (j % 2 == 0)
        for (int i = 0; i < 2; i++) cout << arr[i][j] << " ";
    else
        for (int i = 1; i >= 0; i--) cout << arr[i][j] << " ";
}
```

---

### 5. `QspiralPrint.cpp`, `QspiralSelf.cpp`, `SpiralPrint.cpp`
**Prints the grid in a spiral pattern.**
```cpp
int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int top=0, left=0, right=2, bottom=2;
while (top<=bottom && left<=right) {
    for (int i=left; i<=right; i++) cout << arr[top][i] << " ";
    top++;
    for (int i=top; i<=bottom; i++) cout << arr[i][right] << " ";
    right--;
    for (int i=right; i>=left; i--) cout << arr[bottom][i] << " ";
    bottom--;
    for (int i=bottom; i>=top; i--) cout << arr[i][left] << " ";
    left++;
}
```

---

### 6. `start.cpp`
**A starting example for 2D arrays.**
```cpp
int arr[2][2] = {{1,2},{3,4}};
for (int i = 0; i < 2; i++)
    for (int j = 0; j < 2; j++)
        cout << arr[i][j] << " ";
```

---

### 7. `vector2d.cpp`
**Shows how to use a 2D vector.**
```cpp
vector<vector<int>> arr = {{1,2},{3,4}};
for (int i = 0; i < arr.size(); i++)
    for (int j = 0; j < arr[i].size(); j++)
        cout << arr[i][j] << " ";
```

---

Explore each file to see how