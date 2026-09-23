#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int findMin(vector<int> &nums) {
        int min = __INT_MAX__;
        for(int i : nums)
            if(i < min) min = i;
        return min;
    }
};
