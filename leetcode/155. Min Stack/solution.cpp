#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
class MinStack {
public:
    int size;
    int *arr;
    int *minArr;

    MinStack() {
        size = 0;
        arr = new int[__INT_MAX__];
        minArr = new int[__INT_MAX__];
    }
    
    void push(int value) {
        arr[size] = value;
        if(size == 0) minArr[size] = value;
        else
        {
            minArr[size] = min(getMin(),value);
        }
        size++;
    }
    
    void pop() {
        size--;
    }
    
    int top() {
        return arr[size-1];
    }
    
    int getMin() {
        return minArr[size - 1];
    }
};
