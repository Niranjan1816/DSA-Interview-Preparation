/*
=========================================================
LeetCode 0056 - Merge Intervals

Pattern:
Sorting + Greedy

Difficulty:
Medium

Approach:
Sort intervals based on their starting points. Merge
overlapping intervals by maintaining the current merged
interval and updating its ending boundary whenever an
overlap is found.

Time Complexity:
O(n log n)

Space Complexity:
O(n)

Author:
Niranjan Murthy H M

=========================================================
*/
#include <bits/stdc++.h>
using namespace std;