#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // first sort the induvidual elements of array of string.
            // eat -> aet------\
            // tea -> aet------- "aet" -> this will be the key
            // ate -> aet------/
            // tan -> ant
            // nat -> ant
            // bat -> abt

            // aet is key and eat , tea , ate are values

            vector<vector<string>> ans ;
            unordered_map<string , vector<string>> mp;


            for(string st : strs){
            
            string original = st ;
             sort(st.begin() , st.end()); // sort returns nothing , void
            // after sorting , st will be sorted value , original st will be gone , so we store it initially
               mp[st].push_back(original) ;

            }

            for(auto &it : mp){

                ans.push_back(it.second);
            
                
            }


            return ans ;
        
    }
};