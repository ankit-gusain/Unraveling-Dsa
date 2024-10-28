#include <iostream>

struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

Node *AddAlternateNodes(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    Node *current = head;

    while (current != nullptr && current->next != nullptr && current->next->next != nullptr)
    {
        current->next->next->data += current->data;
        current = current->next;
    }

    return head;
}

Node *createNode(int data)
{
    return new Node(data);
}

void printList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main()
{
    Node *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);
    head->next->next->next->next->next = createNode(6);
    head->next->next->next->next->next->next = createNode(7);

    std::cout << "Original list:" << std::endl;
    printList(head);

    head = AddAlternateNodes(head);

    std::cout << "Modified list:" << std::endl;
    printList(head);

    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}