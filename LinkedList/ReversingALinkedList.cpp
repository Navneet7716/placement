#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        if (head == NULL)
            return NULL;
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *forw = NULL;

        while (curr)
        {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }

        head = prev;

        return head;
    }
};

int main () {
    Solution *obj = new Solution();
    ListNode* n;

    obj->reverseList(n);

}