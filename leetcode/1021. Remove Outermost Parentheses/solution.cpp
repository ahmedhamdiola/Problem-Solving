#include <iostream>
#include <stack>
#include <deque>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        deque<char> st;
        stack<char> valid;
        string res;


        for(char c : s){
            if(st.empty()){
                valid.push(c);
                st.push_back(c);
                continue;
            }
            st.push_back(c);
            if((valid.top() == '(' && c == ')') || (valid.top() == ')' && c == '(')){
                valid.pop();
            }
            else valid.push(c);
            if(valid.empty()){
                st.pop_back();
                st.pop_front();
                while(!st.empty()){
                    res.push_back(st.front());
                    st.pop_front();
                }
            }
        }
        return res;
    }
};