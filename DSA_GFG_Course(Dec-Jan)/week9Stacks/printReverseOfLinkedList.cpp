// Print reverse of a Linked List using Stack
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *link;
};

void rear_load(node **head_ref, int data)
{
    node *temp = new node();
    temp->data = data;
    temp->link = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = temp;
        return;
    }
    node *last = *head_ref;
    while (last->link != NULL)
    {
        last = last->link;
    }
    last->link = temp;
    return;
}

void print_list(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->link;
    }
    return;
}

void print_reverse(node *head)
{
    stack<int> s;
    while (head != NULL)
    {
        s.push(head->data);
        head = head->link;
    }
    while (!s.empty())
    {
        int x = s.top();
        s.pop();
        cout << x << " ";
    }
}

int main()
{
    node *head = NULL;
    rear_load(&head, 1);
    rear_load(&head, 2);
    rear_load(&head, 3);
    rear_load(&head, 4);
    rear_load(&head, 5);

    print_reverse(head);
}