#include <bits/stdc++.h>

using namespace std;

int firstIndex(int a[], int size, int key)
{

    int i = 0;
    int j = size - 1;
    int mid = (i + j) / 2;
    int ans;

    while (i <= j)
    {

        if (a[mid] == key)
        {
            ans = mid;
            j = mid - 1;
        }
        else if (a[mid] > key)
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
        mid = (i + j) / 2;
    }

    return ans;
}

int lastIndex(int a[], int size, int key)
{

    int i = 0;
    int j = size - 1;
    int mid = (i + j) / 2;
    int ans;

    while (i <= j)
    {

        if (a[mid] == key)
        {
            ans = mid;
            i = mid + 1;
        }
        else if (a[mid] > key)
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
        mid = (i + j) / 2;
    }

    return ans;
}

int main()
{

    int a[] = {1, 2, 3, 4, 4, 4};
    int n = 4;
    int key = 4;

    int i = firstIndex(a, 6, 4);
    int j = lastIndex(a, 6, 4);

    cout << (j - i) + 1;

}