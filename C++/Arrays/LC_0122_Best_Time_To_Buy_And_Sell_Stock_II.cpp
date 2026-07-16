/*
=========================================================
LeetCode 0122 - Best Time to Buy and Sell Stock II

Pattern:
Greedy

Difficulty:
Medium

Approach:
Accumulate every positive price difference between
consecutive days. This captures the maximum profit by
taking advantage of every increasing sequence.

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