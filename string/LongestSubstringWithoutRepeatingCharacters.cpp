/*

Given a string s, find the length of the longest substring without repeating characters.
Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

*/

#include <bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    unordered_map<char, int> mp;

    int start = 0, end = 0;
    int count = 0;

    while (end < s.length())
    {
        mp[s[end]]++;
        while (mp[s[end]] != 1)
        {
            mp[s[start]]--;
            start++;
        }
        count = max(count, end - start + 1);
        end++;
    }

    return count;
}
int main()
{
    string s = "bbbbb";
    cout << lengthOfLongestSubstring(s);
}