#include <bits/stdc++.h>
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define ll long long int

using namespace std;

int main()
{

    fast_cin();
    int n;
    cin >> n;
    int c[n + n];

    for (int i = 0; i < n + n; i++)
    {
        if (i % 2 == 0)
            cin >> c[i];
    }

    for (int i = 0; i < n + n; i++)
    {

        if (i % 2 != 0)
            cin >> c[i];
    }

    ll dp[n + n + 1];

    memset(dp, 0, sizeof(dp));

    dp[0] = c[0];
    dp[1] = max(c[0], c[1]);
    for (int i = 2; i < n + n; i++)
    {
        dp[i] = max(dp[i - 1], c[i] + dp[i - 2]);
    }

    cout << dp[n + n - 1];
}