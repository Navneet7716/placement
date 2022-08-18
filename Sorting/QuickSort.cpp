#include<bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Lomuto Partition Method

int LomutoPartition(vector<int> &arr, int low, int high){

	int p = high;
	int i = low - 1;
	for (int j = low; j < high; j++) {
		if (arr[j] < arr[p]) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[p]);
	return i+1;
}

// faster than lomuto

// [5 3 8 4 2 7 1 10]

int HoarePartition(vector<int> &arr, int low, int high) {

	int pivot = arr[low];
	int i = low-1;
	int j = high+1;

	while(true) {
		do {
			i++;
		} while(arr[i] < pivot);

		do {
			j--;
		}while (arr[j] > pivot);

		if (i >= j) {
			return j;
		}
		swap(arr[i], arr[j]);
	}
	return -1;
}


void quickSort(vector<int> &arr, int low, int high) {

	if (low < high) {
		int p = LomutoPartition(arr, low, high);
		// quickSort(arr, low, p);
		quickSort(arr, low, p-1);
		quickSort(arr, p + 1, high);
	}

}


int main() {

	fast_cin();
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i=0;i<n;i++) {
		cin >> arr[i];
	}
	quickSort(arr, 0, n-1);

	for (int i: arr) {
		cout << i << " ";
	}

}