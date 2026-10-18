#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int res = BST(0, nums.size() - 1, nums, target);
        return res;
    }
    int BST(int l, int r, vector<int>& nums, int target){
        if(l > r) return l;
        int mid = (l + r) / 2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] > target){
            return BST(l, mid - 1, nums, target);
        }
        else{
            return BST(mid + 1, r, nums, target);
        }
    }
};