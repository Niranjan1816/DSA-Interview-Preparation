/*

Problem:
LC 33 - Search in Rotated Sorted Array

Pattern:
Modified Binary Search

Key Observation:
One half of the array is always sorted.
Determine the sorted half first, then check if the target lies within its range.

Time:
O(log n)

Space:
O(1)

Mistakes I made:
1. Compared only with nums[mid].
2. Forgot to check whether the target lies within the sorted interval.
3. Used < instead of <= for boundary conditions.

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        // take 2 pointers 
        int n = nums.size();
        int left = 0 ; 
        int right = n-1 ;
        

        while(left <= right){

            int mid = left + (right - left)/2;

            if(nums[mid] == target) return mid ;


            // we treat both halfs as a 2 differnt arrays for now , and search independently
            // but we are not sure , the left half and right half are sorted or not as it is left rotated array


            //check if left part is sorted
            // if yes choose left part and search for target
            if(nums[left] <= nums[mid]){
                
                //check if target lies in the left half
                if(nums[mid] > target && nums[left] <= target){


                    right = mid - 1 ;

                }
                else{
                    left = mid + 1;
                }
            }
            //check if right is sorted
            // if yes go inside right
            else if(nums[mid] <= nums[right]){
                
                // check if target is in the right half
                if(nums[mid] < target && nums[right] >= target){

                    left = mid+1;
                }
                else{
                    right = mid - 1;
                }
            }
        }


        return -1 ;
    }
};