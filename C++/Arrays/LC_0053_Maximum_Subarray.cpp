/*
=========================================================
LeetCode 0053 - Maximum Subarray

Pattern:
Kadane's Algorithm

Difficulty:
Medium

Approach:
Maintain a running subarray sum. If the current sum
becomes negative, discard it and start a new subarray.
Track the maximum sum encountered throughout the array.

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
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        int maxi = INT_MIN ;
        int currentsum = 0 ;

        for(int i = 0 ; i < n ; i++){

            currentsum = currentsum + nums[i]; // it may go below 0

            maxi = max (currentsum , maxi); // keep track of max sum seen so far .

            // if sum goes below 0 , reset it to 0 
            // cause -ve sum will reduce the sum , not increases
            // this is kandanes algo

            if(currentsum < 0){
                currentsum = 0 ;
            }

        }


        return maxi ;

        
    }
};