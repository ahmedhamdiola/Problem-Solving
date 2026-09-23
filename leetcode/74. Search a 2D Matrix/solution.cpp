#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    bool BST(int l, int r, vector<int> matrix, int target){
        if(l > r) return false;
        int mid = (l + r) / 2;
        if(matrix[mid] == target) return true;
        else if(matrix[mid] < target) return BST(mid + 1, r, matrix, target);
        else return BST(l, mid-1, matrix, target);
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> nums;
        for(auto v : matrix){
            if(v[0] <= target && v[v.size() - 1] >= target){
                nums = v;
                break;
            }
        }
        return BST(0, nums.size() - 1, nums, target);
    }
};