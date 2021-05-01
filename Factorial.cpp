#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getFactorialValue(int number) {
	if(number == 1)
		return 1;
	return number * getFactorialValue(number - 1);
}
int main() {
	cout<<getFactorialValue(6);
}
