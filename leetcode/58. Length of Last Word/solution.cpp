#include<iostream>
using namespace std;
class Solution {
public:
int lengthOfLastWord(string s) {
    string tmp;
    string res;
    for (char c : s) {
        if (c == ' ') {
            if (!tmp.empty())
                res = tmp;
            tmp.clear();
        } else {
            tmp.push_back(c);
        }
    }
    if (!tmp.empty()) res = tmp;
    return res.length();
}};