#include <bits/stdc++.h>

using namespace std;

int main() {


    int a[] = {3,4,5,1,2};

    int size = 5;

    int start = 0;
    int end = size - 1;
    int mid = (start+end) /2;

    while(start < end) {

        if(a[mid] < a[mid+1]) {
            start = mid+1;
        }
        else {
            end = mid;
        }

        mid = (start+end) / 2;

    }


    cout << "Peak is at : " << start ;

}