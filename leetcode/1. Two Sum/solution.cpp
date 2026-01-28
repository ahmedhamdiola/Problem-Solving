#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            int comp = target - nums[i];
            if(mp.count(comp)){
                res.push_back(mp[comp]);
                res.push_back(i);
                return res;
            }
            else
                mp[nums[i]] = i;
        }
        return res;
    }
};
