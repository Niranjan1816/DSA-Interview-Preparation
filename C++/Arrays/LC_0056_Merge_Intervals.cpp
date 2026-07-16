/*
=========================================================
LeetCode 0056 - Merge Intervals

Pattern:
Sorting + Greedy

Difficulty:
Medium

Approach:
Sort intervals based on their starting points. Merge
overlapping intervals by maintaining the current merged
interval and updating its ending boundary whenever an
overlap is found.

Time Complexity:
O(n log n)

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
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        int n = intervals.size();

        sort(intervals.begin() , intervals.end());

        vector<int> current = intervals[0];
        vector<vector<int>> ans ;

        for(int i =1 ; i<n ; i++){

            if(intervals[i][0] <= current[1]){
                // merge into current , and select greater element between current[1] and intervals[i][1];

                current[1] = max(current[1] , intervals[i][1]);
            }
            else{
                ans.push_back(current);
                // update current 
                current = intervals[i];
            }

        }

        ans.push_back(current);

        return ans;
        
    }
};