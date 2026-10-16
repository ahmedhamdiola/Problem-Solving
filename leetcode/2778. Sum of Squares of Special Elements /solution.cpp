#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        for(int j = 0; j<n;j++){
            int i = j + 1; 
            if(n % i == 0){
                res += pow(nums[j], 2);
            }
        }
        return res;
    }
};