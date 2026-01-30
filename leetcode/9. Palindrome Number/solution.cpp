#include<iostream>
#include<stack>
#include<string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        stack<char> st;
        string s = to_string(x);
        for(char c: s)
            st.push(c);
        for(char c : s){
            if(c != st.top()){
                return false;
            }
            st.pop();
        }
        return true;
    }
};

int main(){
    Solution s;
    cout << s.isPalindrome(121);
}