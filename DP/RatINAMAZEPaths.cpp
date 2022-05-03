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

int main()
{
    fast_cin();

    vector<vector<int>> mat = {{1, 1, 1, 0, 1}, {1, 1, 1, 1, 0}, {1, 0, 1, 0, 1}, {0, 1, 1, 1, 1}};

    int dp[4][5];

    memset(dp, 0, sizeof(dp));

    dp[0][0] = mat[0][0];

    for (int i = 1; i < 5; i++)
    {
        dp[0][i] = (mat[0][i - 1] == 1 && mat[0][i] != 0) ? 1 : 0;
    }
    for (int i = 1; i < 4; i++)
    {
        dp[i][0] = (mat[i - 1][0] == 1 && mat[i][0] != 0) ? 1 : 0;
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 5; j++)
        {

            if ((dp[i - 1][j] != 0 && dp[i][j - 1] != 0) && mat[i][j] != 0)
            {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
            else if ((dp[i - 1][j] != 0 || dp[i][j - 1] != 0) && mat[i][j] != 0)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }

    cout << dp[3][4];

    return 0;
}