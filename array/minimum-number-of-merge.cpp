#include <bits/stdc++.h>

using namespace std;

int solve(int arr[], int n) {
	int i = 0;
	int j = n - 1;
	int ans = 0;
	while(i <= j) {
		if (arr[i] == arr[j])  {
			i++;
			j--;
		}
		else if (arr[i] > arr[j]) {

			arr[j-1] += arr[j];
			ans++;
			j--;

		} else {
			arr[i+1] += arr[i];
			ans++;
			i++;
		}
	}
	return ans;
}

int main() {

	int n;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++) cin >> arr[i];
	cout << solve(arr, n); 

}