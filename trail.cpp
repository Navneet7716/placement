#include<bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int rand2() {
	return rand() & 1;
}

int rand3() {
	int x, y;
    do {
        x = rand2();
        y = rand2();
    } while (x == 0 && y == 1);

    return x + y;
}


int main() {
	cout << rand3();
}