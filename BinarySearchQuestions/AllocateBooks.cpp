#include<bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

bool isPossible(vector<int> arr, int n, int m, int mid) {
	int studentCount = 1;
	int pageSum = 0;
	for(int i = 0; i < n; i++) {
		if(pageSum + arr[i] <= mid) {
			pageSum += arr[i];
		}else {
			studentCount++;
			if(studentCount > m || arr[i] > mid) {
				return false;
			}
			pageSum = arr[i];
		}
	}
	return true;
}


int allocateBooks(vector<int> arr, int n, int m) {
	int start = 0;
	int sum = 0;
	for(int i=0;i<arr.size();i++){
		sum += arr[i];
	}
	int end = sum;
	int mid = (start + end) / 2;
	int ans = -1;
	while(start <= end){
		if(isPossible(arr, n, m, mid)) {
			ans = mid;
			end = mid-1;
		}else {
			start = mid+1;
		}
		mid = (start + end) / 2;
	}
	return ans;
}


int main() {
	fast_cin();
	int t;
	cin >> t;
	while (t--) {
		int n,m;
		cin >> n >> m;
		vector<int> arr(n);
		for (int i=0;i<n;i++) cin >> arr[i];
		cout << allocateBooks(arr, n, m) << "\n";
	}

}