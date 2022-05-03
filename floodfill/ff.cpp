#include<bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int mat[100][100];


void ff(int r, int c, int i, int j) {

	if (i < 0 || i>=r || j<0 || j>=c || mat[i][j] != 1) {
		return;
	}

	mat[i][j] = 3;

	ff(r, c, i+1, j);
	ff(r,c,i,j+1);
	ff(r,c,i-1,j);
	ff(r,c,i,j-1);
	ff(r,c,i+1,j+1);
	ff(r,c,i-1,j-1);
	ff(r, c , i+1, j-1);
	ff(r, c, i-1, j+1);

}

int main() {

	fast_cin();
	int r, c;

	cin >> r >> c;

	for (int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
			cin >> mat[i][j];
		}
	}

	for (int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
			if (mat[i][j] == 3) {
				mat[i][j] = 1;
				ff(r, c, i, j);
			}
		}
	}

	int count = 0;

	for (int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
			if (mat[i][j] == 1)
				count++;

		}
	}

	cout << "\n";

	for (int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
				cout <<  mat[i][j] << " ";
		}
		cout << "\n";


	}

cout << "\n";

cout << count;
	



}