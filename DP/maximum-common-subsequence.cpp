#include <bits/stdc++.h>
using namespace std;

int dp[105][105];

int h(string s1, string s2, int i, int j) {
    if (i >= s1.length() || j >= s2.length()) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    if (s1[i] == s2[j]) {
        dp[i][j] = 1+h(s1,s2,i+1,j+1);
        return dp[i][j];
    }
    int opt1 = h(s1,s2,i+1,j);
    int opt2 = h(s1,s2,i,j+1);
    dp[i][j] = max(opt1,opt2);
    return dp[i][j];
}


int main () {

    string s1,s2;
    cin >> s1 >> s2;
    memset(dp, -1, sizeof dp);
    cout << h(s1,s2,0,0);
    
}