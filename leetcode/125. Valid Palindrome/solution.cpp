#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i = 0; i< s.size(); i++){
            if(!isalnum(s[i]) || isspace(s[i])) continue;
            temp.push_back(tolower(s[i]));
        }
        int i = 0;
        int j = temp.size() - 1;
        while(j > i){
            if(temp[i] != temp[j]){
                cout << temp[i] << " " << temp[j];
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};