// 2 * f(n-1) + f(n-3);

#include <bits/stdc++.h>
using namespace std;

long long int dp[101];


long long int func(int n) {

	if (n == 0 || n == 1 || n == 2) return 1;

	if (dp[n] != -1) return dp[n];

	dp[n] = 2 * func(n-1) + func(n-3);

	return dp[n]; 


}


int main() {
	int n;
	cin >> n;

	memset(dp, -1, sizeof(dp));

	cout << func(n);
}