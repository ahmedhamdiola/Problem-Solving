#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<int> st;
        for (int i = 0; i < temperatures.size(); i++) {
            while (!st.empty() &&
                temperatures[i] > temperatures[st.top()]) {
                int previous = st.top();
                st.pop();
                res[previous] = i - previous;
            }
            st.push(i);
        }
        return res;
    }
};