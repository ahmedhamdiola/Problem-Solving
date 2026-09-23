#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int BST(int l, int r, int target, vector<int>& nums){
        if(l > r) return -1;
        int mid = (l + r) / 2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) return BST(mid + 1, r, target, nums);
        else return BST(l, mid - 1, target, nums);
    }
    int search(vector<int>& nums, int target) {
        return BST(0, nums.size() - 1, target, nums);
    }
};