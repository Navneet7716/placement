#include<bits/stdc++.h>
using namespace std;


int main() {

	int arr[] = {5,0,6,2,3};
	int n = 5;

	int leftMax[n], rightMax[n];
	leftMax[0] = arr[0];

	for (int i=1;i<n;i++) {
		leftMax[i] = max(arr[i], leftMax[i-1]); 
	}
	
	rightMax[n-1] = arr[n-1];
	for (int i=n-2;i >= 0;i--) {
		rightMax[i] = max(arr[i], rightMax[i+1]); 
	}

	for (int i=0;i<n;i++) {
		cout << leftMax[i] << " "; 
	}
	cout << "\n";

	for (int i=0;i<n;i++) {
		cout << rightMax[i] << " "; 
	}
	cout << "\n";


    int ans=0;
    
    for(int i=0;i<n;i++) {
        ans += min(leftMax[i] , rightMax[i]) - arr[i];
    }

    cout << "ANS : " << ans;



}