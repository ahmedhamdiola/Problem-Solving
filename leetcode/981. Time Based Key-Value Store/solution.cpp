#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
class TimeMap {
public:
unordered_map<string, vector<pair<string, int>>> map; // KEY - EL 7ALA - TIME
    TimeMap() {

    }
    
    void set(string key, string value, int timestamp) {
        map[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        if (!map.count(key)) return "";
        return BST(0, map[key].size()-1, map[key], timestamp, -1);
    }
    string BST(int l, int r, vector<pair<string,int>>& v, int timestamp, int ans){ 
        // shout out for chatGPT for the 'ans' help word
        if (l > r) {
            if (ans == -1) return "";
            return v[ans].first;
        }        
        int mid = (l + r) / 2;
        if(v[mid].second == timestamp) return v[mid].first;
        else if (v[mid].second < timestamp) return BST(mid + 1, r, v, timestamp, mid);
        else return BST(l, mid-1, v, timestamp, ans);
    }
};
