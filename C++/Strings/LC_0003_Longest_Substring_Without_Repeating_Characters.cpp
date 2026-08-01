#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left = 0 ;
        int maxlen = 0 ;
        unordered_set<char> st;

        // by using sliding window 
        // use left and right pointers , move right pointer until no duplicates arrive .
        // record the max len
        // if you see the duplicate char , move the left pointer and shrink window 

        for(int right = 0 ; right < s.length() ; right++){

            char ch = s[right];

            while(st.count(ch)){ // or st.find(ch) != st.end()
                // .count() will return 1 if char present or 0 if char absent
                // we can use .count() to check only anything present or not
                // if you want iterator , then use .find()
                // find() will return the iterator pointing to that object if found
                // otherwise return null . end()

                // duplicate found
                //remove the char from set
                // move the left pointer
                st.erase(s[left]);
                left++;
            }

            st.insert(ch);
            maxlen = max(maxlen , right-left+1);


        } 

        return maxlen ;
        
    }
};