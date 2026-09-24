#include <iostream>
#include <math.h>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i = 0; i<nums.size();i++){
            if(nums[i] == target) return i;
        }
        return -1;
    }

};