/*
=========================================================
LeetCode 0238 - Product of Array Except Self

Pattern:
Prefix & Suffix

Difficulty:
Medium

Approach:
Compute prefix products for every index, then traverse
from right to left while maintaining a running suffix
product. Multiply the prefix and suffix products to
obtain the final answer without using division.

Time Complexity:
O(n)

Space Complexity:
O(1) (excluding the output array)

Author:
Niranjan Murthy H M

=========================================================
*/

#include <bits/stdc++.h>
using namespace std;