#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() -1;
        int max = -1;
        for(int i = 0; i<height.size();i++){
            int tmp = (end - start) * min(height[end], height[start]);
            if(max < tmp) max = tmp;
            if(height[end] > height[start]) start++;
            else end--;
        }
        return max;
    }
};