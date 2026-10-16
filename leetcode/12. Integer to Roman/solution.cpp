#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string s = "";
        while (num > 0) {
            if (num >= 1000) {
                s.push_back('M');
                num -= 1000;
            }
            else if (num >= 900) {
                s += "CM";
                num -= 900;
            }
            else if (num >= 500) {
                s.push_back('D');
                num -= 500;
            }
            else if (num >= 400) {
                s += "CD";
                num -= 400;
            }
            else if (num >= 100) {
                s.push_back('C');
                num -= 100;
            }
            else if (num >= 90) {
                s += "XC";
                num -= 90;
            }
            else if (num >= 50) {
                s.push_back('L');
                num -= 50;
            }
            else if (num >= 40) {
                s += "XL";
                num -= 40;
            }
            else if (num >= 10) {
                s.push_back('X');
                num -= 10;
            }
            else if (num >= 9) {
                s += "IX";
                num -= 9;
            }
            else if (num >= 5) {
                s.push_back('V');
                num -= 5;
            }
            else if (num >= 4) {
                s += "IV";
                num -= 4;
            }
            else {
                s.push_back('I');
                num -= 1;
            }
        }

        return s;
    }
};