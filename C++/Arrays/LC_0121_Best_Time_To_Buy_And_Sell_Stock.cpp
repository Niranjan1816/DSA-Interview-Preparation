/*
=========================================================
LeetCode 0121 - Best Time to Buy and Sell Stock

Pattern:
Greedy

Difficulty:
Easy

Approach:
Maintain the minimum stock price seen so far and compute
the maximum profit obtainable by selling on each day.

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

        int mini = prices[0];
        int maxi = 0 ;

        for(int i =  1 ; i < prices.size() ; i++){
            
            mini = min(prices[i] , mini);

            int profit = prices[i] - mini ;

            maxi = max(profit , maxi);

        }
        
        return  maxi ;
    }
};