/*
================================================================================
LeetCode 287. Find the Duplicate Number
================================================================================

Problem:
Given an array nums containing n + 1 integers where each integer is in the range
[1, n] inclusive.

There is only one repeated number.
Return that duplicate number.

Constraints:
• Do NOT modify the array.
• Use only constant extra space.

Example:
Input:  [1,3,4,2,2]
Output: 2

--------------------------------------------------------------------------------
Approaches:

1. Brute Force
   - Compare every pair.
   - Time Complexity : O(n²)
   - Space Complexity: O(1)

2. HashMap
   - Store frequency of each element.
   - Time Complexity : O(n)
   - Space Complexity: O(n)

3. Sorting
   - Sort and compare adjacent elements.
   - Not valid because array modification is not allowed.
   - Time Complexity : O(n log n)

4. Optimal (Floyd's Cycle Detection)
   - Treat array values as pointers.
   - Detect cycle using slow and fast pointers.
   - Reset one pointer and move both one step until they meet.
   - Meeting point is the duplicate number.
   - Time Complexity : O(n)
   - Space Complexity: O(1)

--------------------------------------------------------------------------------
Pattern:
✔ Floyd's Cycle Detection

Key Learnings:
• Arrays can sometimes be interpreted as linked lists.
• Duplicate values create a cycle.
• Floyd's Algorithm works beyond traditional linked list problems.
• Keep pointer initialization consistent during both phases.
• Avoid mixing indices with values while implementing the algorithm.

================================================================================
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int slow = nums[0];
        int fast = nums[0];

        // Phase 1: Find intersection point
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        while(slow != fast);

        // Phase 2: Find cycle entrance
        int slow2 = 0;

        while(slow != slow2)
        {
            slow = nums[slow];
            slow2 = nums[slow2];
        }

        return slow;
    }
};
