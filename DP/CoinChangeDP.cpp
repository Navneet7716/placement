#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
ll MOD = 998244353;
double eps = 1e-12;
#define dbg(x) cout << #x << " = " << x << ln
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int dp[1002][1002];

int h(int s[], int n, int m, int i)
{

    if (n == 0)
        return 1;
    if (n < 0 || i >= m)
        return 0;
    if (dp[i][n] != -1)
        return dp[i][n];

    return dp[i][n] = h(s, n - s[i], m, i) + h(s, n, m, i + 1);
}

int main()
{
    fast_cin();

    int n, m;
    cin >> n >> m;
    int s[m];

    for (int i = 0; i < m; i++)
        cin >> s[i];

    memset(dp, -1, sizeof(dp));
    cout << h(s, n, m, 0);
    return 0;
}
