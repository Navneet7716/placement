#include <bits/stdc++.h>

using namespace std;

int fromMiddle(string &s, int left, int right)
{
    if (left > right)
        return 0;
    while (left >= 0 && right < s.size() && s[left] == s[right])
    {
        left--;
        right++;
    }
    return right - left - 1;
}

string longestPalinSubstring(string str)
{
    if (str.length() < 1)
        return "";

    int start = 0;
    int len = 0;

    for (int i = 0; i < str.length(); i++)
    {
        int len1 = fromMiddle(str, i, i + 1);
        int len2 = fromMiddle(str, i, i);
        if (len < max(len1, len2))
        {
            len = max(len1, len2);
            start = i - (len - 1) / 2;
        }
    }
    return str.substr(start, len);
}

int main()
{
    cout << longestPalinSubstring("racecar");
}