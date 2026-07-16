/*
=========================================================
LeetCode 0179 - Largest Number

Pattern:
Custom Sorting

Difficulty:
Medium

Approach:
Convert integers to strings and sort them using a custom
comparator. For two strings a and b, place 'a' before 'b'
if (a + b) forms a larger number than (b + a). Concatenate
the sorted strings to construct the largest possible number.

Time Complexity:
O(n log n)

Space Complexity:
O(n)

Author:
Niranjan Murthy H M
GitHub:
https://github.com/Niranjan1816

=========================================================
*/

#include <bits/stdc++.h>
using namespace std;

