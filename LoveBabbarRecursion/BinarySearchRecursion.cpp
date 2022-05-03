#include <bits/stdc++.h>

using namespace std;

bool BinarySearch(int a[], int low, int high, int key)
{

    if (low > high)
        return false;

    int mid = (low + high) / 2;

    if (a[mid] == key)
        return true;

    if (key > a[mid])
    {
        return BinarySearch(a, mid + 1, high, key);
    }
    else
    {
        return BinarySearch(a, low, mid - 1, key);
    }
}

int main()
{

    int a[] = {1, 5, 3, 4};
    int size = 4;
    int key;
    cout << "Enter what you want to find ";
    cin >> key;

    cout << "Found " << BinarySearch(a, 0, size-1, key);
}