#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node() {}
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *newAppend(Node *head, Node *n)
{
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
    return head;
}

Node *push(Node *head, Node *n)
{
    n->next = head;
    head = n;

    return head;
}

void Print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
    return;
}

Node *deleteNode(Node *head, int index)
{

    if (index == 0)
    {
        head = head->next;
    }
    else
    {
        Node *temp = head;
        int i = 0;
        while (i != index - 1)
        {
            temp = temp->next;

            i++;
        }

        if (temp->next->next == NULL)
        {
            temp->next = NULL;
        }
        else
        {
            temp->next = temp->next->next;
        }
    }

    return head;
}

// sum of all nodes;

int SumAll(Node *head)
{

    int sum = 0;
    Node *temp = head;

    while (temp != NULL)
    {

        sum += temp->data;
        temp = temp->next;
    }

    return sum;
}

// length of the linked list;

int findLength(Node *head)
{

    int count = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

// nth node in the linked List;

int findNode(Node *head, int n)
{
    Node *temp = head;

    int i = 0;

    while (i != n)
    {
        temp = temp->next;
        i++;
    }

    return temp->data;
}

int ReturnMiddleNode(Node *head)
{

    Node *temp1 = head;
    Node *temp2 = head;

    while (temp1->next != NULL)
    {
        temp1 = temp1->next->next;
        temp2 = temp2->next;
    }

    return temp2->data;
}
// NOTE: this is searching..

bool Search(Node *head, int data) {

    Node* temp = head;

    while(temp != NULL) {

        if (temp->data == data) return true;
        temp = temp -> next;
    }

    return false;

}


int main()
{
    Node *head = new Node();
    head = NULL;
    head = newAppend(head, new Node(10));
    head = newAppend(head, new Node(20));
    head = newAppend(head, new Node(40));
    head = newAppend(head, new Node(50));
    head = push(head, new Node(30));
    cout << "Printing !!\n";
    Print(head);
    cout << "MIDDLE : " << ReturnMiddleNode(head) << "\n";
    cout << "Nth element : " << findNode(head, 3) << "\n";
    cout << "Length : " << findLength(head) << "\n";
    cout << "SUM : " << SumAll(head) << "\n";

    cout << "Search for 10 : " << Search(head,10) << "\n";
    head = deleteNode(head, 4);
    cout << "Printing After Deleting !!\n";
    Print(head);
}