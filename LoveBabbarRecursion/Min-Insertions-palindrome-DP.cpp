#include <bits/stdc++.h>

using namespace std;

int dp[200][200];

int minIns(string s, int i, int j)
{
    if (i >= j)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (s[i] == s[j])
    {
        return dp[i][j] = minIns(s, i + 1, j - 1);
    }
    if (s[i] != s[j])
    {
        return dp[i][j] = 1 + min(minIns(s, i + 1, j), minIns(s, i, j - 1));
    }
}

int main()
{
    string s;
    cin >> s;
    memset(dp, -1, sizeof(dp));
    cout << minIns(s, 0, s.length() - 1);
}