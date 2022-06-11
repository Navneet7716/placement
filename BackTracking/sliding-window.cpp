#include<bits/stdc++.h>

using namespace std;


bool isSubSum(int arr[], int n, int sum) {

	int currSum = arr[0], s = 0;

	for(int e = 1; e < n; e++) {
		while(currSum > sum && s < e - 1) {
			currSum -= arr[s];
			s++;
		}

		if (currSum == sum) return true;

		if (e < n) {
			currSum += arr[e];
		}

	}

	return (currSum == sum);

}


int main() {


	int arr[] = {1, 4, 20, 3, 10, 5};
	int sum = 33;
	int n = 6;

	cout << isSubSum(arr, n, sum);

}