#include<bits/stdc++.h>
using namespace std;


long long int sum(int arr[], int n, int l, int r) {

	long long int ans = 0;

	for(int i=l; i<=r;i++) {
		ans += arr[i];
	}

	return ans;

}


void update(int arr[], int n, int index, int value) {

	arr[index] = value;

}

int main() {

	int arr[] = {1,23,45};

	update(arr, 3, 2, 4);

	for(int i=0;i<3;i++) cout << arr[i] << " ";

}