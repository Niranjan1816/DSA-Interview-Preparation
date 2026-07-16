/*
=========================================================
LeetCode 0075 - Sort Colors

Pattern:
Dutch National Flag Algorithm

Difficulty:
Medium

Approach:
Use three pointers (low, mid, high) to partition the
array into three regions containing 0s, 1s and 2s in
a single traversal.

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
    void sortColors(vector<int>& nums) {
/*
        //approach 1:
        TC -> O(N);
        SC -> O(1);
        BUT , passes -> 2 , 1 for counting , another for rearranging

        int n = nums.size();
        int count0 =0 ;
        int count1 = 0;
        int count2 = 0 ;

        for(int i=0 ; i<n ;i++){

            int num = nums[i];

            if(num==0) count0 ++ ;
            else if(num == 1) count1++ ;
            else count2++ ;

        }

        int i=0 ;

        while(count0){
            nums[i] = 0 ;
            i++ ;
            count0 -- ;
        }

        while(count1){
            nums[i]=1 ;
            i++;
            count1 --;
        }

        while(count2){
            nums[i]=2 ;
            i++;
            count2--;
        }*/

        //approach 2: O(1)->sc
                      // o(n) -> tc
                      // only one pass . it do everything in one pass
                      // so effective than earlier


        int mid = 0 ;
        int low = 0 ;
        int high = nums.size() -1;

        while(mid <= high){

            if(nums[mid] == 0){
                swap(nums[low] , nums[mid]);
                low++ ;
                mid++ ;
            }
            else if(nums[mid] == 1){
                mid ++ ; // already in correct position
            }

            else{ //if(arr[mid] == 2)

                swap(nums[mid] , nums[high]);
                high-- ;

            }
        }

    }
};