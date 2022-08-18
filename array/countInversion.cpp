#include <bits/stdc++.h>

using namespace std;

int countInvAndSort(int arr[], int left, int mid, int right)
{
    int len1 = mid - left + 1, len2 = right - mid;
    int leftArr[len1], rightArr[len2];
    for (int i = 0; i < len1; i++)
    {
        leftArr[i] = arr[i + left];
    }
    for (int i = 0; i < len2; i++)
    {
        rightArr[i] = arr[mid + 1 + i];
    }

    int res = 0, i = 0, j = 0, k = left;

    while (i < len1 && j < len2)
    {

        if (leftArr[i] <= rightArr[j])
        {
            arr[k++] = leftArr[i++];
        }
        else
        {
            arr[k++] = rightArr[j++];
            res = res + len1 - i;
        }
    }

    while (i < len1)
    {
        arr[k++] = leftArr[i++];
    }
    while (j < len2)
    {
        arr[k++] = rightArr[j++];
    }

    return res;
}

int countInv(int arr[], int left, int right)
{
    int res = 0;
    if (left < right)
    {
        int mid = (left + right) / 2;
        res += countInv(arr, left, mid);
        res += countInv(arr, mid + 1, right);
        res += countInvAndSort(arr, left, mid, right);
    }
    return res;
}

int main()
{
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countInv(arr, 0, n - 1);
}