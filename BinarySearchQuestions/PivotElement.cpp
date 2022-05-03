#include <bits/stdc++.h>

using namespace std;

int getPivot(int a[], int n)
{

    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (a[mid] >= a[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return start;
}

int main()
{

    int a[5] = {4, 5, 1, 2, 3};

    cout << "Pivot element is : " << getPivot(a, 5);
}