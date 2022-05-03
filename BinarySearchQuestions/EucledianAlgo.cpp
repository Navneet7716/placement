#include<bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define ll long long int

ll CalcGcd(ll a, ll b) {

	// recursive approach.
	
	return b == 0 ? a : CalcGcd(b, a%b);

}


int main() {
		
	fast_cin();

	int t;
	cin >> t;

	while(t--) {

		ll a, b;
		cin >> a >> b;

		ll gcd = CalcGcd(a, b);

		ll lcm = (a * b) / gcd;

		cout << gcd << " " << lcm << "\n"; 


	}


}