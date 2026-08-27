#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include <string>
using namespace std;
class Solution {
public:
    string encode(vector<string>& strs) {
        string res;
        for(int i = 0; i<strs.size(); i++){
            int length = strs[i].size();
            res.append(to_string(length));
            res.push_back('#');
            res.append(strs[i]);
        }
        return res;
    }
    vector<string> decode(string s) {
        string tmp;
        vector<string> res;
        string length;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '#'){
                int L = stoi(length);
                for (int j = i + 1; j < i + 1 + L; j++)
                    tmp.push_back(s[j]);
                
                res.push_back(tmp);
                tmp.clear();
                i += L;
                length.clear();
                continue;
            }
            length.push_back(s[i]);

        }
        return res;
    }
};
