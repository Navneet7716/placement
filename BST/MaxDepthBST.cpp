#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

ll MOD = 998244353;

double eps = 1e-12;

#define dbg(x) cout << #x << " = " << x << "\n";

#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

class Node
{
public:
    int data;

    Node *left, *right;
    Node(int data) { this->data = data; }
    Node() {}
};

int main()
{
    fast_cin();

    int n;
    cin >> n;

    dbg(n);

    return 0;
}