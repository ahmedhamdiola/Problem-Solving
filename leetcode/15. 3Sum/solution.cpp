#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> seen_triplets;
        vector<vector<int>> res;
        vector<int> tmp = nums;
        sort(tmp.begin(), tmp.end());
        for(int i = 0; i < tmp.size() - 2; i++) {
            if (i > 0 && tmp[i] == tmp[i-1]) continue;
            int left = i + 1;
            int right = tmp.size() - 1;
            while(left < right) {
                int sum = tmp[i] + tmp[left] + tmp[right];
                if(sum == 0) {
                    res.push_back({tmp[i], tmp[left], tmp[right]});
                    while(left < right && tmp[left] == tmp[left+1]) left++;
                    while(left < right && tmp[right] == tmp[right-1]) right--;
                    left++;
                    right--;
                } else if(sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return res;
    }
};