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

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int res = arr[1] - arr[0];
    int mini = arr[0];

    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i] - mini);
        mini = min(mini, arr[i]);
    }

    cout << res;

    return 0;
}