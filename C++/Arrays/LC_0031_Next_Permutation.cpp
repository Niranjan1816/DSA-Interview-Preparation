/*
=========================================================
LeetCode 0031 - Next Permutation

Pattern:
Observation

Difficulty:
Medium

Approach:
Traverse from right to left to find the first decreasing
element (pivot). Swap it with the next greater element
on its right, then reverse the suffix to obtain the next
lexicographically greater permutation.

Time Complexity:
O(n)

Space Complexity:
O(1)

Author:
Niranjan Murthy H M
GitHub:
https://github.com/Niranjan1816

=========================================================
*/

#include <bits/stdc++.h>
using namespace std;