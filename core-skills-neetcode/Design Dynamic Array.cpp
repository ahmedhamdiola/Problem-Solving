#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
class DynamicArray {
public:
    int* arr;
    int size;
    int elements;
    DynamicArray(int capacity) {
        arr = new int[capacity];
        size = 0;
        elements = capacity;
    }

    int get(int i) {
        for(int k = 0; k<size;k++){
            if(arr[k] == arr[i]) return arr[i];
        }
        return -1;
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(size == elements){
            resize();
        }
        arr[size] = n;
        size++;
    }

    int popback() {
        int res = arr[size - 1];
        arr[size - 1] = -1;
        size--;
        return res;
    }

    void resize() {
        elements *= 2;
        int* tmp = new int[elements];
        for(int i=0;i<size;i++){
            tmp[i] = arr[i];
        }
        arr = tmp;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return elements;
    }
};
