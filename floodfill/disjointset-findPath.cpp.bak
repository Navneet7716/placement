#include <bits/stdc++.h>

using namespace std;

int p[1000];

void make_set(int n) {
	for (int i=0;i<=n;i++)
		p[i] = i;
}

int find(int x) {
	if (p[x] == x) return x;
	return p[x] = find(p[x]);
}

void merge(int x, int y) {
	
	int lx = find(x);
	int ly = find(y);
	
	if (ly != lx) {
		p[ly] = lx;
	}
	
}


int main() {
	int n; cin >> n;
	
	make_set(n);
	int e, x, y; cin >> e;
	while(e--) {
		cin >> x >> y;
		merge(x, y);
	}
	
	int q; cin >> q;
	
	while(q--) {
		cin >> x >> y;
		if(find(x) == find(y)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
	
}