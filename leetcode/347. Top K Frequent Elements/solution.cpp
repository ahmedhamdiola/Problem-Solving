#include<iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>freq;
        vector<pair<int,int>> v;
        vector<int>res;
        for(int i : nums) freq[i]++;
        for(auto p : freq) v.push_back(p);
        ////////////////////////////////////////////////////////
        /// Hint by ChatGPT
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        ////////////////////////////////////////////////////////
        for(int i = 0; i < k; i++)
            res.push_back(v[i].first);
        return res;
    }
};