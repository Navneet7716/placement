#include <bits/stdc++.h>

using namespace std;

#define fast_cin()                    \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)

int main()
{

	fast_cin();
	int n, m;
	cin >> n >> m;
	int a[n], b[m];

	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < m; i++)
		cin >> b[i];

	for (int i = 0; i < n; i++)
	{
		if (a[i] > b[0])
		{
			swap(a[i], b[0]);
			sort(b, b + m);
		}
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	for (int i = 0; i < m; i++)
		cout << b[i] << " ";
}