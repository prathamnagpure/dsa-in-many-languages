#include<bits/stdc++.h>
using namespace std;
int main() {
    // Array declaration
    vector<int> arr1;

    // Array declaration for a given size
    int size = 10;
    vector<int> arr2(size);

    // Array declaration with initial value
    int initialValue = 5;
    vector<int> arr3(size, initialValue);

    // Array size
    arr1.size();

    // Array loop
    for(int i = 0; i < arr1.size(); ++i) {
        arr1[i]++;
    }

    // Array loop 2 all values

    for (auto val : arr1) {
        // cannot modify array here no index
    }

    // Array loop 3 by reference

    for (auto &val : arr1) {
        // can modify here
        val++;
    }

    // TREE MAP
    map<int, string> treeMap;

    // HASH MAP
    unordered_map<int, string> hashMap;
    
    // SET
    set<int> mySet;
    
    // QUEUE
    queue<int> myQueue;
    
    // STACK
    stack<int> myStack;

    //MAX HEAP
    priority_queue<int> myHeap;

    return 0;
}
