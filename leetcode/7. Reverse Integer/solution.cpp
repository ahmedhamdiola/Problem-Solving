#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long num = 0;
        while(x != 0){
            if(num > INT_MAX / 10 || num < INT_MIN / 10) return 0;
            int i = x % 10;
            x /= 10;
            num = num * 10 + i;
        }
        return num;
    }
};