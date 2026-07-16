/*
=========================================================
LeetCode 0169 - Majority Element

Pattern:
Moore's Voting Algorithm

Difficulty:
Easy

Approach:
Maintain a candidate and a counter. Increase the counter
when the current element matches the candidate and
decrease it otherwise. The remaining candidate is the
majority element.

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