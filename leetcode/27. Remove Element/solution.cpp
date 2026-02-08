#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> tmp;
        int res = 0;
        for(int i : nums){
            if(i != val) 
            {
                res++;
                tmp.push_back(i);
            }
        }
        int size = nums.size();
        nums.clear();
        nums = tmp;
        int sizeCntr = size - tmp.size();
        while(sizeCntr--){
            nums.push_back(0);
        }
        
        return res;
    }
};
