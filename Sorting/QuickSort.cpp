#include<bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int partition(vector<int> arr, int low, int high){

	int pivot = arr[high];
	int i = (low - 1);
	for (int j = low; j < high; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[high]);
	return i+1;

}


void quickSort(vector<int> arr, int low, int high) {

	if (low < high) {

		int partition = partition(arr, low, high);
		quickSort(arr, low, partition-1);
		quickSort(arr, partition + 1, high);

	}

}


int main() {

	fast_cin();
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i=0;i<n;i++) {
		cin >> a[i];
	}
	quickSort(arr, 0, n-1);

}