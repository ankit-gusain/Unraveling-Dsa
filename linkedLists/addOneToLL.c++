#include <bits/stdc++.h>
using namespace std;

struct node
{
public:
    int data;
    node *next = NULL;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printlist(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node *reverselist(node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    node *prev = NULL;
    node *curr = head;
    while (curr != NULL)
    {
        node *fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}

node *addOne(node *head)
{
    head = reverselist(head); // Reverse the list to make addition easier
    int carry = 1; // Initialize carry as 1 because we need to add one
    node *temp = head;
    node *prev = NULL;

    while (temp != NULL)
    {
        int sum = carry + temp->data; // Add carry to the current node's data
        int digit = sum % 10; // Get the new digit to store in the node
        carry = sum / 10; // Update carry for the next node
        temp->data = digit; // Set the new digit in the current node

        prev = temp; // Keep track of the last node
        temp = temp->next; // Move to the next node
    }

    if (carry > 0)
    {
        node *newnode = new node(carry); // Create a new node if there's still a carry
        prev->next = newnode; // Append the new node at the end of the list
    }

    head = reverselist(head); // Reverse the list again to restore original order
    return head; // Return the modified list
}

int main()
{
    node *newnode1 = new node(0);
    node *newnode2 = new node(0);
    node *newnode3 = new node(9);

    node *head = newnode1;
    newnode1->next = newnode2;
    newnode2->next = newnode3;

    printlist(head);
    head = addOne(head);

    printlist(head);
    return 0;
}
