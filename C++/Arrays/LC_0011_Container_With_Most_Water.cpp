#include <bits/stdc++.h>
using namespace std;

/*
 * ============================================================
 * LeetCode 0011 - Container With Most Water
 * ============================================================
 *
 * Pattern          : Two Pointers
 * Difficulty       : Medium
 *
 * Key Idea:
 * Start with the widest possible container. Compute the current
 * area, update the maximum area found so far, and always move
 * the pointer pointing to the shorter line since it limits the
 * current water level. If both heights are equal, moving either
 * pointer is correct.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 *
 * Author           : Niranjan Murthy H M
 * GitHub           : https://github.com/Niranjan1816
 *
 * ============================================================
 */

 class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();

        int i = 0 ;
        int j = n-1;

        int maxwater = 0 ;
        

        while( i < j){

            int width = j - i ;
            int length = min(height[j] , height[i]);
            int area = length * width ;

            maxwater = max(maxwater , area);

            if(height[i] < height[j]){
                i++;
            }
            else{
                j-- ;
            }

            
        }

        return maxwater ;
        
    }
};