// A simple trick is that always the second group of element will have the least number of groups.

#include <bits/stdc++.h>

using namespace std;

void printGroups(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
            {
                cout << "From " << i << " ";
            }
            else
            {
                cout << "To " << (i - 1) << endl;
            }
        }
    }

    if (arr[n-1] != arr[0]) {
        cout << n-1 << "\n";
    }
}

int main()
{

    int arr[] = {0, 0, 1, 1, 0, 0, 1, 1, 0}, n = 9;

    printGroups(arr, n);
}