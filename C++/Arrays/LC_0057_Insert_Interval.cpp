/*
=========================================================
LeetCode 0057 - Insert Interval

Pattern:
Intervals

Difficulty:
Medium

Approach:
Process intervals in three phases:
1. Add all intervals before the new interval.
2. Merge all overlapping intervals with the new interval.
3. Add the remaining non-overlapping intervals.

Time Complexity:
O(n)

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
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        // lets solve this problem in 3 step

        // 1. push all the non overlapping intervals that comes before new interval into the ans 
        // 2. now keep merging the intervals which are overlapping to newinterval   into new interval only.
        // after merging all overlapping intervals , if any non overlapping intervals left after new interval just add then to ans.

        // for intervals [a,b] and [c , d] said to be merged
        // if b >= c
        // and a <= d 

        int i = 0 ;
        int n = intervals.size() ;
        vector<vector<int>> ans ;

        // step1

        while( i < n &&  intervals[i][1] < newInterval[0]) // first condition checked in reversed order
        {
            ans.push_back(intervals[i]);
            i++ ;
        } 

        //  step2 
        // check 2nd condition
        while(i < n &&  intervals[i][0] <= newInterval[1]){
            newInterval[0] = min(intervals[i][0] , newInterval[0]);
            newInterval[1] = max(intervals[i][1] , newInterval[1]);
            i++ ;
        }

        ans.push_back(newInterval);
        

        while( i < n){
            ans.push_back(intervals[i]);
            i++ ;
        }


        return ans ;
    }
}; 