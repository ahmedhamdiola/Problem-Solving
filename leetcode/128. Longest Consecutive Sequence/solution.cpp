#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        sort(nums.begin(), nums.end());
        int seq = 0;
        int maxSeq = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(i == 0){
                seq++;
                continue;
            }
            if(nums[i] == nums[i-1] && i != nums.size() - 1) {
                continue;
            }
            if(nums[i] == nums[i - 1] + 1) 
            {
                seq++;
                if(i == nums.size() - 1 && maxSeq < seq) maxSeq = seq;
            }
            else {
                seq = 1;
            }
            if(maxSeq < seq){
                maxSeq = seq;
            }

        }
        return maxSeq;
    }
};
