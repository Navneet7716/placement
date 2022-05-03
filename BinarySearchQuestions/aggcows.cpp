#include<bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


bool isPossible(vector<int> stalls, int mid, int k) {
	int cowCount = 1;
	int lasPosition = stalls[0];
	for (int i = 0 ; i < stalls.size(); i++) {
		if (stalls[i] - lasPosition >= mid) {
			cowCount++;
			if (cowCount == k) return true;

			lasPosition = stalls[i];
		}
	}
}

int AggressiveCows(vector<int> &stalls, int n, int k) {

	int s = 0;
	int e = -1;
	for (int i: stalls) {
		e = max(e, i);
	}
	int mid = s + (s - e) / 2;
	int ans = -1;
	while(s <= e) {
		if (isPossible(stalls, mid, k)) {
			ans = mid;
			s = mid + 1;
		}
		else {
			e = mid - 1s;
		}
		mid = s + (s - e) / 2;
	}
	return ans;

}


int main() {
	fast_cin();
	vector<int> stalls = {4, 2, 1, 3, 6};
	int n = 5;
	int k = 2;

	cout << AggressiveCows(stalls, n, k);

}