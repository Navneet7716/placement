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

    bool dp[4][5];

    memset(dp, false, sizeof(dp));

    for (int i = 0; i < 5; i++)
    {
        dp[0][i] = mat[0][i] == 1 ? true : false;
    }
    for (int i = 0; i < 4; i++)
    {
        dp[i][0] = mat[i][0] == 1 ? true : false;
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if ((dp[i - 1][j] == true || dp[i][j - 1] == true) && mat[i][j] != 0)
            {
                dp[i][j] = true;
            }
            else
            {
                dp[i][j] = false;
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

    cout << (dp[3][4] == 1) ? "true" : "false";

    return 0;
}
