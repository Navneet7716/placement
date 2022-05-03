#include<bits/stdc++.h>

using namespace std;

int main() {
	
	string str = "0010010101";
	
	int NoOfOnes = 0;
	
	for (int i=0;i<str.size();i++) {
		if (str[i] == '1') {
			NoOfOnes++;
		}
	}
	
	
	cout << NoOfOnes * (NoOfOnes-1) / 2;
	
}