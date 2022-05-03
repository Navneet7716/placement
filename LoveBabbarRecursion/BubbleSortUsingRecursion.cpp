#include <bits/stdc++.h>
#define ll long long int
using namespace std;


void sortArray(int *arr, int n){ 

    if (n == 0 || n == 1) {
        return;
    }

    for (int i=0;i<n-1;i++) {
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    sortArray(arr, n-1);
}

int main()
{
    int arr[5]= {2,5,1,3,4};

    sortArray(arr, 5);

    for (int i: arr) cout << i << " ";

}