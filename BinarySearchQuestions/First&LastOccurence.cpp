#include <bits/stdc++.h>

using namespace std;

int FirstOccurence(int a[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start < end)
    {
        if (a[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (a[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int LastOccurence(int a[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    int ans = -1;

    while (start < end)
    {

        if (a[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (a[mid] > key)
        {

            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}


int main()
{
    int a[] = {1, 2, 3, 3, 4, 4, 5};
    int size = 7;
    int first = FirstOccurence(a, 7, 4);
    int last = LastOccurence(a, 7, 4);
    cout << "First Index: " << first << "\n";
    cout << "Last Index: " << last << "\n";
}