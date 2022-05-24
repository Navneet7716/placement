#include <bits/stdc++.h>

#define newline "\n"

using namespace std;

int equilubriumPoint(int prefixArr[], int n)
{


    for (int i = 1; i < n; i++)
    {

        int leftSum = prefixArr[i - 1];
        int rightSum = prefixArr[n-1] - prefixArr[i];

        cout << "leftSum " << leftSum << " rightSum " << rightSum << newline;
        if (leftSum == rightSum)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{

    int arr[] = {3, 4, 8, -9, 20, 6}, n = 6;
      
    int b[n];

    b[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        b[i] = b[i - 1] + arr[i];
    }

    cout << equilubriumPoint(b, n);
}