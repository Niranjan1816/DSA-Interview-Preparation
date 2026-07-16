/*
=========================================================
LeetCode 0001 - Two Sum

Pattern:
HashMap

Difficulty:
Easy

Approach:
Store each element and its index in a hash map while
iterating through the array. For every element, check
whether its complement (target - current element)
already exists in the map.

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
    vector<int> twoSum(vector<int>& nums, int target) {

        // let X and Y be our 2 numbers. And Z is our target.
        //Now if X + Y = Z , then Y = Z - X .
        // so search for Y in array when we have X and Z .
        // use maps -> gives const lookup.

        unordered_map< int , int > mp ;

        for(int i = 0 ; i < nums.size() ; i++){

            int x = nums[i];
            int y = target - x ;

            if(mp.find(y) != mp.end()){
                // found 
                return { mp[y] , i};
            }

            // if not 
            // just update map
            mp[x] = i ; //{ num , index}

        

        }
        
            // no solutions , return empty vector.

            return{};

    }
};