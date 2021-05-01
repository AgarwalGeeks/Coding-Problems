#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMissingNumber(vector<int>v1, vector<int>v2) {
	int x = 1;
	
	for(int i = 0; i < v1.size(); i++) {
		x ^= v1[i];
	}
	
	for(int i = 0; i < v2.size(); i++) {
		x ^= v2[i];
	}
	
	return x ^ 1;
}

int main() {
	vector<int> v1 = {1, 2, 3, 4, 5, 6};
	vector<int> v2 = {1, 2, 3, 4, 5};
	
	cout<<getMissingNumber(v1, v2);
	
}
