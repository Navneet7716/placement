#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];
    for (int i=0;i<n;i++) cin >> arr1[i];
    for (int i=0;i<m;i++) cin >> arr2[i];
    int i=0,j=0;
    
    while(i < n && j < m) {

        if (i > 0 && arr1[i] == arr1[i-1]) {
            i++;
            continue;
        }
        else if (j > 0 && arr2[j] == arr2[j-1]) {
            j++;
            continue;
        }
        else if (arr1[i] < arr2[j]) {
            cout << arr1[i++] << " ";
        }
        else if (arr2[j] < arr1[i]) {
            cout << arr2[j++] << " ";
        } 
        else {
            cout << arr1[i++] << " ";
            j++;
        }

    }

    while(i < n) {
        if (i > 0 && arr1[i] != arr1[i-1]) 
            cout << arr1[i++] << " ";
        else i++;
    }
    while(j < m) {
        if (j > 0 && arr2[j] != arr2[j-1]) 
                cout << arr2[j++] << " ";
        else j++;
    }

    return 0;
}