#include <bits/stdc++.h>
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define ll long long int

using namespace std;

ll dp[100][100];

int h(int a[], int i, int j)
{

    ll pickIth = 0, pickJth = 0;

    if (i >= j)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    pickIth = a[i];

    if (a[i + 1] > a[j])
    {
        pickIth += h(a, i + 2, j);
        return dp[i][j] = pickIth;
    }
    else
    {
        pickIth += h(a, i + 1, j - 1);
        return dp[i][j] = pickIth;
    }

    pickIth = a[j];

    if (a[i] >= a[j - 1])
    {
        pickJth += h(a, i + 1, j - 1);

        return dp[i][j] = pickJth;
    }
    else
    {
        pickJth += h(a, i, j - 2);
        return dp[i][j] = pickJth;
    }

    return dp[i][j] = max(pickIth, pickJth);
}

int main()
{
    fast_cin();
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << h(a, 0, n - 1);
}