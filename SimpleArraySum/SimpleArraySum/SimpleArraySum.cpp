// SimpleArraySum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	//NOTE: Use CTRL+F5 to launch in visual studio to prevent the console from just shutting down


	int n;
	cout << "Enter the number of integers in the array then press enter: ";
	cin >> n;
	vector<int> arr(n);
	int tempInt;
	tempInt = 0;
	cout << "\nEnter a list of integers seperated by a space: ";
	for (int arr_i = 0; arr_i < n; arr_i++) {
		
		cin >> arr[arr_i];
	}

	for (int i = 0; i < n; ++i) {
		tempInt += arr[i];
	}
	cout << "Sum: ";
	cout << tempInt;
	cout << "\n";

}

