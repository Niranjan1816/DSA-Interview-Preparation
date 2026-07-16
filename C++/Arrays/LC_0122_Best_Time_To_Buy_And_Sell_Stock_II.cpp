/*
=========================================================
LeetCode 0122 - Best Time to Buy and Sell Stock II

Pattern:
Greedy

Difficulty:
Medium

Approach:
Accumulate every positive price difference between
consecutive days. This captures the maximum profit by
taking advantage of every increasing sequence.

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
    int maxProfit(vector<int>& prices) {

        int profit = 0 ;

        for(int i = 1 ; i < prices.size() ; i++){

            if(prices[i] > prices[i-1]){
                profit = profit + (prices[i] - prices[i-1]);
            }
        }

        return profit ;
        
    }
};