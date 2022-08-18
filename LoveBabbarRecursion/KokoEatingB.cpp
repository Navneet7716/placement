// 875. Koko Eating Bananas

#include <bits/stdc++.h>

using namespace std;

int check(int currAns, int h, int a[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        j += (a[i] + currAns - 1) / currAns;
    }
    if (j > h)
    {
        return -1;
    }
    return 1;
}

int main()
{
    int maxi = INT_MIN;
    vector<int> piles = {30,11,23,4,20};
    int h = 5;  
    int n = piles.size();
    int a[n];
    int il = 0;

    for (int i : piles)
    {
        a[i++] = i;
        maxi = max(maxi, i);
    }

    int start = 1;
    int end = maxi;

    int mid = (start + end) / 2;
    int ans = end;

    while (start <= end)
    {
        int y = check(mid, h, a, n);

        if (y == 1)
        {
            ans = mid;
            end = mid - 1;
        }
        if (y == -1)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    cout <<  ans;
}
