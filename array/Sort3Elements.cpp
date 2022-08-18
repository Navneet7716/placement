#include<bits/stdc++.h>

using namespace std;


// 0  ..0..  low  ..1.. mid ..2.. high 

void sortD(vector<int> &arr) {

	int low = 0;
	int mid = 0;
	int high = arr.size() - 1;

	while(mid <= high) {
		if (arr[mid] == 0) {
			swap(arr[mid], arr[low]);
			mid++;
			low++;
		}else if (arr[mid] == 1) {
			mid++;
		}
		else {
			swap(arr[mid], arr[high]);
			high--;
		}
	}
}

int main () {

	vector<int> arr = {0,1,2,1,1,2};	

	sortD(arr);

	for(int i: arr) cout << i << " ";
}	