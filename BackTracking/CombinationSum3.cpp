/*

216. Combination Sum III

Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

Only numbers 1 through 9 are used.
Each number is used at most once.
Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.


Example 1:

Input: k = 3, n = 7
Output: [[1,2,4]]
Explanation:
1 + 2 + 4 = 7
There are no other valid combinations.
Example 2:

Input: k = 3, n = 9
Output: [[1,2,6],[1,3,5],[2,3,4]]
Explanation:
1 + 2 + 6 = 9
1 + 3 + 5 = 9
2 + 3 + 4 = 9
There are no other valid combinations.
Example 3:

Input: k = 4, n = 1
Output: []
Explanation: There are no valid combinations.
Using 4 different numbers in the range [1,9], the smallest sum we can get is 1+2+3+4 = 10 and since 10 > 1, there are no valid combination.
 

Constraints:

2 <= k <= 9
1 <= n <= 60

*/

// code


#include<bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

class Solution {

private:
	void solve(vector<int> &u, vector<vector<int>> &ans, vector<int> &list,
				 int k, int target, int index) {

		if (k == 0 and target == 0) {
			ans.push_back(list);
			return;
		}

		if (index >= 9) {
			return;
		}

		int val = u[index];

		if (target - val >= 0) {
			list.push_back(val);
			solve(u, ans, list, k - 1, target - val, index + 1);
			list.pop_back();
		}

		solve(u, ans, list, k, target, index + 1);

		return;

	}

public:
	vector<vector<int>> combinationSum3(int k, int n) {
		vector<int> u = {1,2,3,4,5,6,7,8,9};
		vector<vector<int>> ans;
		vector<int> list;
		solve(u ,ans, list, k, n, 0);
		return ans;
	}

};


int main() {

	fast_cin();
	int k,n;
	cin >> k >> n;

	Solution sol;

	vector<vector<int>> ans = sol.combinationSum3(k,n);

	for (vector<int> i : ans) {
		for (int j : i) {
			cout << j << " ";
		}
		cout << "\n";
	}

}