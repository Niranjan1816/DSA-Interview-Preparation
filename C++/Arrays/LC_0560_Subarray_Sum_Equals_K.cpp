#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        //here we want to find how many subarray sum = k 
        //so keep map<int,int> which stores sum and how many times it occured 

        int n = nums.size();
        unordered_map<int , int> mp ;
        int count = 0;
        int prefix = 0;

        //edge case 
        //before starting , we saw sum =0 , 1 time
        mp[0] = 1;

        for(int i=0 ; i<n ; i++){

            prefix += nums[i];

            //if there is a sum exists equal to prefix-k , there is a subarry between those 2 points sum = k

            if(mp.find(prefix-k) != mp.end()){
                //found 
                //update the count 
                count = count + mp[prefix - k];
            }

            //not found , update in the  mp
            mp[prefix]++ ;
        }

        return count ;
        
    }
};