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

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;

        // Step 1: Find pivot
        for (int i = n-2; i >= 0; i--) {
            if (nums[i] < nums[i+1]) {
                idx = i;
                break;
            }
        }

        // Case 1: No pivot found → last permutation → reverse whole array
        if (idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find element just larger than nums[idx]
        for (int i = n-1; i > idx; i--) {
            if (nums[i] > nums[idx]) {
                swap(nums[i], nums[idx]);
                break;
            }
        }

        // Step 3: Reverse suffix
        reverse(nums.begin() + idx + 1, nums.end());
    }
};
