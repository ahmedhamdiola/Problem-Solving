#include<iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(st.empty()) {
                st.push(c);
                continue;
            }
            if(st.top() == '(' && c == ')')
            {
                st.pop();
                continue;
            }
            else if(st.top() == '{' && c == '}')
            {
                st.pop();
                continue;
            }
            else if(st.top() == '[' && c == ']')
            {
                st.pop();
                continue;
            }
            st.push(c);
        }
        return st.empty();
    }
};