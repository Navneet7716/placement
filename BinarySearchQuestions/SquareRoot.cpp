#include<bits/stdc++.h>

using namespace std;


int SquareRoot(int n) {
	int start = 0;
	int end = n;
	int mid = (start+end)/2;
	int ans = -1; // { PREFER USING LONG LONG INT TO AVOID OVERFLOW }
	while (start < end) {
		if (mid*mid == n) {
			return mid;
		}
		else if (mid*mid > n) {
			end = mid-1;
		}
		else {
			ans = mid;
			start = mid + 1;
		}
		mid = (start+end)/2;
	}
	return ans;
}

int main() {

	int n;

	cin >> n;
	int ans =SquareRoot(n);

	if( ans== -1)
	cout << "No SquareRoot Exist";
	else cout << ans << " is the square root\n";

} 