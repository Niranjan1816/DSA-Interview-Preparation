/*
=========================================================
LeetCode 0217 - Contains Duplicate

Pattern:
HashSet

Difficulty:
Easy

Approach:
Store elements in a hash set while traversing the array.
If an element already exists in the set, a duplicate has
been found.

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

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // here do not use maps , cause we dont need to store anything 
        // we just need to check for duplicates
        // so use sets ->o(1)

        unordered_set<int> st;

        for(int i = 0 ; i< nums.size() ; i++){

            if(st.find(nums[i]) != st.end()){
                return true ;
            }

            st.insert(nums[i]);
        }
        

        return false ;
    }
};