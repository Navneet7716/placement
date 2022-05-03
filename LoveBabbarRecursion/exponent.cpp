#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll expo(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    ll ans = expo(a, b / 2);
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

ll expo2(ll a, ll b){

    if (b == 0) return 1;
    if (b == 1) return a;

    ll ans = expo2(a, b / 2);

    if (b%2 == 0) return ans*ans;
    else return a * ans * ans;

} 


int main()
{
    ll a, b;
    cin >> a >> b;
    cout << expo2(a, b);
}