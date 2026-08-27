#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        vector<string> temp = strs;
        for(string& s : temp){
            sort(s.begin(), s.end());
        }
        unordered_map<string, vector<string>> freq;
        for(int i=0;i<temp.size(); i++){
            freq[temp[i]].push_back(strs[i]);
        }
        for(auto pair : freq){
            res.push_back(pair.second);
        }
        return res;
    }
};
