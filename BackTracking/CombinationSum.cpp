/*
Given an array of distinct integers candidates and a target integer target, 
return a list of all unique combinations of candidates where the chosen numbers sum to target.
 You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. 
Two combinations are unique if the frequency of at least one of the chosen numbers is different.

It is guaranteed that the number of unique combinations that
 sum up to target is less than 150 combinations for the given input.

*/

/*

Example 1:

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

*/

// solution 


#include<bits/stdc++.h>

using namespace std;

class Solution {

private:
	void solve(vector<int> candidates, int target, vector<vector<int>> &ans, vector<int> &item, int currIndex) {

		if (target == 0) {
			ans.push_back(item);
			return;
		}
		if (currIndex >= candidates.size()) {
			return;
		}
		int currValue = candidates[currIndex];
		if (target - currValue >= 0) {
			item.push_back(currValue);
			solve(candidates, target - currValue, ans, item, currIndex);
			item.pop_back();
		}
		solve(candidates, target, ans, item, currIndex+1);
		return;

	}


public:
	vector<vector<int>> combinationSum(vector<int> &candidates, int target) {

		vector<vector<int>> ans;
		vector<int> item;
		solve(candidates, target, ans, item, 0);
		return ans; 

	}

};


int main() {

	Solution sol;
	vector<int> candidates = {2,3,6,7};
	int target = 7;
	vector<vector<int>> ans = sol.combinationSum(candidates, target);
	for (vector<int> i: ans) {
		cout << "[ ";
		for (int h : i) {
			cout << h << " ";
		}
		cout << "]\n";
	}
	return 0;
}
