#include<bits/stdc++.h>

using namespace std;

int IntPart(int n) {
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

double morePrecision(int n, int precision, int tempSol) {

	double factor = 1;

	double ans = tempSol;

	for (int i =0;i<precision;i++) {
		factor = factor/10;
		for (double j = ans; j*j < n; j=j+factor) {
			ans = j;
		}
	}

	return ans;

}

int main() {

	int n;
	cin >> n;

	int tempSol = IntPart(n);
	cout << "Answer is " << morePrecision(n, 3, tempSol);

	return 0;

}