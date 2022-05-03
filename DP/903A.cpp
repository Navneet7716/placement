#include <bits/stdc++.h>
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

int main()
{

    fast_cin();

    int t;
    cin >> t;

    bool dp[102];

    memset(dp, false, sizeof(dp));
    dp[0] = true;
    dp[1] = false;
    dp[2] = false;
    dp[3] = true;
    dp[4] = false;
    dp[5] = false;
    dp[6] = true;
    dp[7] = true;

    for (int i = 8; i <= 100; i++)
    {
        dp[i] = dp[i - 3] || dp[i - 7];
    }

    while (t--)
    {
        int x;
        cin >> x;
        if (dp[x])
        {
            cout << "YES\n ";
        }
        else
            cout << "NO\n";
    }
}