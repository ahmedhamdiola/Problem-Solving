#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        st.push(stoi(tokens[0]));
        for(int i=1;i<tokens.size();i++){
           
                if(tokens[i] == "+"){
                    int left = st.top();
                    st.pop();
                    int right = st.top();
                    int res = left + right;
                    st.pop();
                    st.push(res);
                }
                else if(tokens[i] == "*"){
                    int left = st.top();
                    st.pop();
                    int right = st.top();
                    st.pop();
                    int res = left * right;
                    st.push(res);
                }
                else if(tokens[i] == "-"){
                    int left = st.top();
                    st.pop();
                    int right = st.top();
                    st.pop();
                    int res = right - left;
                    st.push(res);
                }
                else if(tokens[i] == "/"){
                    int left = st.top();
                    st.pop();
                    int right = st.top();
                    st.pop();
                    int res = right / left;
                    st.push(res);
                }
                else{
                    st.push(stoi(tokens[i]));
                }
        }
        return st.top();
    }
};
