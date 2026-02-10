#include<iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int i : nums){
            st.insert(i);
        }
        return (!(nums.size() == st.size()));
    }
};