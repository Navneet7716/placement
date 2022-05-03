#include <bits/stdc++.h>

using namespace std;

long long int BinaryExpo(long long int a, long long int b)
{
	long long int ans = 1;
	while (b > 0)
	{
		if (b & 1)
		{
			ans = ans * a;
		}
		a = a * a;
		b = b >> 1;
	}
	return ans;
}

int main()
{
	long long a, b;
	cin >> a >> b;
	cout << BinaryExpo(a, b);
}