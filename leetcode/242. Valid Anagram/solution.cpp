#include<iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq1;
        unordered_map<char, int> freq2;
        for(char c : s) freq1[c]++;
        for(char c : t) freq2[c]++;
        if(freq1.size() != freq2.size()) return false;
        for(auto p : freq1){
            if(freq2[p.first] != p.second){
                return false;
            }
        }
        return true;
    }
};