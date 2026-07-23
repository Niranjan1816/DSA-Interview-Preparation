/*
================================================================================
LeetCode 15. 3Sum
================================================================================

Problem:
Given an integer array nums, return all unique triplets [nums[i], nums[j], nums[k]]
such that:
    nums[i] + nums[j] + nums[k] == 0

The solution set must not contain duplicate triplets.

Example:
Input:  [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]

--------------------------------------------------------------------------------
Approaches:

1. Brute Force
   - Check every possible triplet.
   - Time Complexity : O(n³)
   - Space Complexity: O(1)

2. Hashing
   - Fix one element and solve Two Sum using HashSet.
   - Remove duplicate triplets using a set.
   - Time Complexity : O(n²)
   - Space Complexity: O(n)

3. Optimal (Sorting + Two Pointers)
   - Sort the array.
   - Fix one element.
   - Use two pointers to find the remaining pair.
   - Skip duplicate elements to avoid repeated triplets.
   - Time Complexity : O(n²)
   - Space Complexity: O(1) (excluding output)

--------------------------------------------------------------------------------
Pattern:
✔ Sorting
✔ Two Pointers

Key Learnings:
• Sorting enables efficient two-pointer traversal.
• Skip duplicate values for i, left and right pointers.
• Convert 3Sum into a 2Sum problem after fixing one element.
• Two pointers eliminate unnecessary comparisons.

================================================================================
*/
