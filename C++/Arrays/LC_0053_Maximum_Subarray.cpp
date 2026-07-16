/*
=========================================================
LeetCode 0053 - Maximum Subarray

Pattern:
Kadane's Algorithm

Difficulty:
Medium

Approach:
Maintain a running subarray sum. If the current sum
becomes negative, discard it and start a new subarray.
Track the maximum sum encountered throughout the array.

Time Complexity:
O(n)

Space Complexity:
O(1)

Author:
Niranjan Murthy H M

=========================================================
*/

#include <bits/stdc++.h>
using namespace std;