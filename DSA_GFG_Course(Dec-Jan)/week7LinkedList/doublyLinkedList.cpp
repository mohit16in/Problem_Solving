//Problem: Doubly Linked List
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* next;
	node* prev;
};

void insert(node** head_ref, int data)
{
	node* temp = new node;
	temp->data = data;
	temp->next = NULL;
	temp->prev = NULL;

	if(*head_ref == NULL)
	{
		*head_ref = temp;
		return;
	}

	node* last = *head_ref;
	while(last->next != NULL)
	{
		last = last->next;
	}
	last->next = temp;
	temp->prev = last;
	return;
}

void print(node* head_ref)
{
	node* last = head_ref;
	while(head_ref!=NULL)
	{
		cout << head_ref->data << " ";
		last = head_ref;
		head_ref = head_ref->next;
	}
	cout << endl;
	while(last!=NULL)
	{
		cout << last->data << " ";
		last = last->prev; 
	}
	return;
}

int main ()
{
	node* head = NULL;
	insert(&head, 10);
	insert(&head, 20);
	insert(&head, 30);
	insert(&head, 40);
	insert(&head, 50);

	print(head);
}
