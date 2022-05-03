#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;
    int n = s.length();

    int dp[n + 1][n + 1];

    memset(dp, 0, sizeof(dp));

    int i, j;

    for (j = 1; j < n; j++)
    {
        for (i = 0; i < n - j; i++)
        {
            if (s[i] == s[j + i])
            {
                dp[i][j + i] = dp[i + 1][j + i - 1];
            }
            else
            {
                dp[i][j + i] = 1 + min(dp[i + 1][j + i], dp[i][j + i - 1]);
            }
        }
    }

     
//     for (int k=0;k<n;k++) {
//     for(int o = 0;o<n;o++){
//     cout << dp[k][o] << " ";

//     } 
//     cout  << "\n";

//     }
// cout << "\n";

    cout << dp[0][n-1];
}