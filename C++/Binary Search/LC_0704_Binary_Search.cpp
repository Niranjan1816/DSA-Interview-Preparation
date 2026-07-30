/*

// using iteraton

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int left = 0 ;
        int right = n-1;

        while(left <= right){

            int mid = left + (right - left / 2) ; // to control overflow

            if(nums[mid] == target){
                return mid ;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
            else{
                left = mid + 1 ;
            }

        }

        return -1 ;


        
    }
};


*/



// using recursion

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    int binarysearch(vector<int>& nums, int target , int l , int r){

        // base condition
        if(l > r) return -1 ;

        int mid = l + (r - l)/2;

        if(nums[mid] == target) return mid;

        else if(nums[mid] > target){
            return binarysearch(nums , target , l , mid - 1);
        }
        else{
            return binarysearch(nums , target , mid+1 , r);
        }

    }

    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int l = 0 ;
        int r = n - 1 ;

        // call helper function

        return  binarysearch(nums , target , l , r);
    }
};