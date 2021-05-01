#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getNumberOccuringOddTimes(vector<int>v) {
    int x = 1;
    for(int i = 0; i < v.size(); i++) {
        x ^= v[i];
    }

    return x ^ 1;
}

int main() {
    vector<int> inputVector;
    inputVector.push_back(1);
    inputVector.push_back(2);
    inputVector.push_back(2);
    cout<<getNumberOccuringOddTimes(inputVector);
}