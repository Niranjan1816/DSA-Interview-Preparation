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

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int candidate = 0 ;
        int count = 0;

        for(int i = 0 ; i< nums.size() ; i++){

            if(count == 0){
                candidate = nums[i];
            }

            if(nums[i] == candidate ){
                count++ ;
            }
            else{
                count--;
            }
        }

        return candidate;
        
    }
};

