/*
=========================================================
LeetCode 0057 - Insert Interval

Pattern:
Intervals

Difficulty:
Medium

Approach:
Process intervals in three phases:
1. Add all intervals before the new interval.
2. Merge all overlapping intervals with the new interval.
3. Add the remaining non-overlapping intervals.

Time Complexity:
O(n)

Space Complexity:
O(n)

Author:
Niranjan Murthy H M

=========================================================
*/
#include <bits/stdc++.h>
using namespace std;