#include <iostream>
#include <queue>
#include <unordered_set>
#include <math.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s == " ") return 1;
        unordered_set<char> st;
        int left = 0, right = 0;
        int res = 0;
        while (right < s.size())
        {
            while (st.count(s[right]))
            {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);
            right++;

            res = max(res, right - left);
        }
        return res;
        
    }
};