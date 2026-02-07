#include<iostream>
#include <cctype>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int i : nums) st.insert(i);
        int size = nums.size();
        vector<int> tmp;
        for(auto i : st) tmp.push_back(i);
        int sizeTmp = tmp.size() - 1;
        nums.clear();
        for(int i=0;i<size; i++){
            if(i<tmp.size())
                nums.push_back(tmp[i]);
            else
                nums.push_back(0);
        }
        return st.size();
    }
};
int main(){
    vector<int> nums = {1,1,2};
    Solution s;
    cout << s.removeDuplicates(nums)<<endl;
}