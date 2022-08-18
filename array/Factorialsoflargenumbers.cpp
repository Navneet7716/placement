#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    
    void multiply(vector<int> &ans, int size, int x) {
        
        int carry = 0;
        
        for (int i=0;i<size;i++) {
            int temp = ans[i] * x + carry;
            ans[i] = temp%10;
            carry = temp/10;
        }
        
        while(carry) {
            ans.push_back(carry%10);
            carry= carry/10;
        }
    }
    
    vector<int> factorial(int N){
        vector<int> ans;
        
        ans.push_back(1);
        int size = 1;
        
        for (int i=2;i<=N;i++) {
            multiply(ans, ans.size(), i);
        }
      
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {

    Solution s;

    vector<int> ans = s.factorial(100000);

    for (int i: ans) cout << i;


}