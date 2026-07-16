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

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> prefix(n) ;

        prefix[0] = 1 ;

        for(int i = 1 ; i < n ; i++){

            prefix[i] = prefix[i -1] * nums[i-1];

        }
        
        int suffix = 1 ;
        vector<int> answer(n) ;

        for(int i = n-1 ; i>=0 ; i--){

            // update the answer then update the suffix.
            answer[i] = prefix[i] * suffix ;

            suffix =  suffix * nums[i];

        }

        return answer ;
    }
};