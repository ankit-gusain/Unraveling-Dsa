#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *next = NULL;
    int data;

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

node *add2Nums(node *head1, node *head2)
{
    head1 = reverselist(head1); // Reverse the first list
    head2 = reverselist(head2); // Reverse the second list

    node *resultHead = NULL;
    node *resultTail = NULL;
    int carry = 0;

    while (head1 != NULL || head2 != NULL || carry > 0)
    {
        int sum = carry;
        if (head1 != NULL)
        {
            sum += head1->data;
            head1 = head1->next;
        }
        if (head2 != NULL)
        {
            sum += head2->data;
            head2 = head2->next;
        }

        carry = sum / 10;
        sum = sum % 10;

        node *newNode = new node(sum);
        if (resultHead == NULL)
        {
            resultHead = resultTail = newNode;
        }
        else
        {
            resultTail->next = newNode;
            resultTail = newNode;
        }
    }

    return reverselist(resultHead); // Reverse the result list to restore the correct order
}

int main()
{
    node *list1node1 = new node(9);
    node *list1node2 = new node(9);
    node *list1node3 = new node(9);

    node *head1 = list1node1;
    list1node1->next = list1node2;
    list1node2->next = list1node3;

    node *list2node1 = new node(9);
    node *list2node2 = new node(9);
    node *list2node3 = new node(9);

    node *head2 = list2node1;
    list2node1->next = list2node2;
    list2node2->next = list2node3;

    cout << "List 1: ";
    printlist(head1);

    cout << "List 2: ";
    printlist(head2);

    node *result = add2Nums(head1, head2);

    cout << "Result: ";
    printlist(result);

    return 0;
}
