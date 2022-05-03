#include<bits/stdc++.h>

using namespace std;


bool isSorted(int a[], int size) {

    if (size <= 1) return true;

    if (a[0] > a[1]) return false;

    
    else {
        bool ans = isSorted(a+1,size-1);
        return ans;
    }
}

int FindSum(int a[], int size) {
    if (size == 0) return 0;
    if (size == 1) return a[0];

    int remaining = FindSum(a+1,size-1);
    int sum = a[0] + remaining;

    return sum;

}

int findDiff(int a[], int size) {

    if (size == 0) return 0;
    if (size == 1) return  a[0];

    int remaining = findDiff(a+1,size-1);
    int diff = a[0] - remaining;

    return diff;


}

bool LinearSearch(int a[], int size, int key) {

    if (size == 0) return false;

    if (a[0] == key) return true;
    else {
        bool remaining = LinearSearch(a+1,size-1,key);

        return remaining;
    }

}


int main() {

    int a[] = {1,5,3,4};
    int size = 4;

    cout << FindSum(a,size) << "\n";
    cout << findDiff(a,size) << "\n";

    cout << "Found " << LinearSearch(a, size, 1); 

}