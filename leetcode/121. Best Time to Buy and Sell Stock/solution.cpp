#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = left + 1;
        int min = __INT_MAX__;
        int maxSoFar = 0;
        int res = 0;
        while(right < prices.size()){
            if(prices[left] < min) min = prices[left];
            if(prices[left] > prices[right]) {
                left = right;
                right++;
                continue;
            }
            else {
                maxSoFar = prices[right] - prices[left];
                if(maxSoFar > res) res = maxSoFar; 
            }
            right++;
        }
        return res;
    }
};