#include<bits/stdc++.h>
using namespace std;


int main() {

	int arr[] = {1, 5, 3, 8, 12};
	int n = 5;

	int profit = 0;

	for(int i=1;i<n;i++) {
		if (arr[i] > arr[i-1]) {
			profit += arr[i] - arr[i-1];
		}
	}


	cout << profit;



}