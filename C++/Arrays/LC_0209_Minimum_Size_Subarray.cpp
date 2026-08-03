#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int left = 0 ;
        int n  = nums.size();
        int sum = 0;
        //int len = 0;
        int minlen = INT_MAX ;

        for(int right = 0 ; right <n ; right++){

         sum = sum + nums[right];

         while(sum >= target && left < n){

            minlen = min(right - left + 1 , minlen);
            sum = sum - nums[left];
            left++;

         }




        }

        if(minlen == INT_MAX){
            return 0;
        }

        return minlen ;
        
    }
};