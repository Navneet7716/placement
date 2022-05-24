#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{

    if (a.second == b.second)
    {
        return a.first < b.first;
    }

    return a.second < b.second;
}

int main()
{

    vector<pair<int, int>> values = {{6, 2}, {4, 3}, {2, 6}, {1, 5}};

    sort(values.begin(), values.end(), compare);

    // for (pair<int, int> i : values)
    // {
    //     cout << i.first << ", " << i.second << "\n";
    // }

    int dp[values.size() + 1];

    for (int i = 0; i < values.size() + 1; i++)
    {
        dp[i] = 1;
    }

    for (int i = 1; i < values.size() + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {

            if (values[i].first >= values[j].first)
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    
    int maxi = INT_MIN;

    for (int i = 0; i < values.size() + 1; i++)
    {
        maxi = max(maxi, dp[i]);
    }

    cout << "ANSWER: " << maxi;
}