#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *insertion(Node *head, int data)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}
Node *reverselinkedlist(Node *head, Node *prev, Node *curr)
{
    if (curr == NULL)
    {
        return prev;
    }
    while (curr != NULL)
    {
        Node *fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}

int main()
{
    int n;
    cout << "enter the length : ";
    cin >> n;

    Node *head = NULL;
    int data;

    for (int i = 0; i < n; i++)
    {
        cout << "enter the data : ";
        cin >> data;

        head = insertion(head, data);
    }

    print(head);

    Node *prev = NULL;
    Node *curr = head;
    cout << endl;
    head = reverselinkedlist(head, prev, curr);
    cout << "reversed linked List " << endl;
    print(head);
}
