#include <bits/stdc++.h>
using namespace std;

class Meeting
{
public:
    int s;
    int e;
    int p;
    Meeting(int s, int e, int p)
    {
        this->s = s;
        this->e = e;
        this->p = p;
    }
    void toString()
    {
        cout << "{" << this->s << ", " << this->e << ", " << this->p << "} ";
        cout << "\n";
    }
};

bool compare(Meeting *a, Meeting *b)
{
    if (a->e == b->e)
    {
        return a->p < b->p;
    }
    return a->e < b->e;
}

vector<int> maximumMeetings(vector<int> &start, vector<int> &end)
{
    vector<Meeting *> meetings;
    for (int i = 0; i < start.size(); i++)
    {
        meetings.push_back(new Meeting(start[i], end[i], i));
    }

    sort(meetings.begin(), meetings.end(), compare);

    // for (auto i : meetings)
    // {
    //     i->toString();
    // }

    vector<int> ans;
    int last = meetings[0]->e;
    ans.push_back(meetings[0]->p+1);

    for (int i= 1; i<start.size() ;i++) {

        if (last < meetings[i]->s) {
            ans.push_back(meetings[i]->p+1);
            last = meetings[i]->e;
        }

    }
    return ans;
}

int main()
{
    vector<int> start = {1, 3, 0, 5, 8, 5}, end = {2, 4, 6, 7, 9, 9};
    for (auto i : maximumMeetings(start, end))
    {
        cout << i << " ";
    }
}