#include <iostream>

using namespace std;

int main() {
    int arr[] = {4, 7, 8, 9};
    int key = 5;

    int start = 0;
    int end = 3;
    int mid = start + (end - start) / 2;
    int ans = start;
    
    while(start < end) {
        if (arr[mid] < key)  {
            ans = mid;
            start = mid + 1;
        } else if (arr[mid] > key) {
            end = mid-1;
        }
        mid = start + (end - start) / 2;
    }
    
    cout << arr[start] << " " << arr[end+1];
}