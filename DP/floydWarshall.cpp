#include<bits/stdc++.h>
#define INF 99

using namespace std;


void floydWarshall(vector<vector<long long int>> &mat, int v) {
	
	for (int mid = 0; mid < v; mid++) {
		for (int start = 0; start < v; start++) {
			for (int end = 0; end < v ; end++) {
				
				if(mat[start][mid] + mat[mid][end] < mat[start][end]) {
					mat[start][end] = mat[start][mid] + mat[mid][end];
				}
			}
		}
	}
	
	
	// for (int i=0;i<v;i++) {
	// 	for (int j=0;j<v;j++) {
	// 		cout << mat[i][j] << " "; 
	// 	}
	// 	cout << "\n";
	// }
	
}


int main() {
	
	int v = 4,e = 4;
	// cin >> v >> e;
	
	vector<vector<long long int>> mat = { { 0, 5, INF, 10 },
                        { INF, 0, 3, INF },
                        { INF, INF, 0, 1 },
                        { INF, INF, INF, 0 } };;
	
	// for (int i=0;i<v;i++) {
	// 	for (int j=0;j<v;j++) {
	// 		mat[i][j] = INT_MAX;
	// 	}
	// }
	
	// for (int i=0;i<e;i++) {
	// 	int x,y,z;
	// 	cin >> x >> y >> z;
	// 	mat[x][y] = z;
	// 	mat[y][x] = z;
	// }
	
	// for (int i=0;i<v;i++) {
	// 	mat[i][i] = 0;
	// }
	
	for (int i=0;i<v;i++) {
		for (int j=0;j<v;j++) {
			cout << mat[i][j] << " "; 
		}
		cout << "\n";
	}

	floydWarshall(mat, v);
	cout << "\n";
	for (int i=0;i<v;i++) {
		for (int j=0;j<v;j++) {
			cout << mat[i][j] << " "; 
		}
		cout << "\n";
	}
	
	
}
