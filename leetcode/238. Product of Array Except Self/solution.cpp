#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int multi = 1;
        int zeroC = 0;

        for(int i : nums) {
            if(i == 0) 
                zeroC++;
            else
                multi *= i;
        }
        for(int i : nums) {
            if (zeroC > 1) 
            {
                res.push_back(0);
            }
            else if (zeroC == 1)
            {
                if(i == 0)
                    res.push_back(multi);
                else
                    res.push_back(0);
            }
            else 
            {
                res.push_back(multi / i);
            }
        }
        return res;
    }
};