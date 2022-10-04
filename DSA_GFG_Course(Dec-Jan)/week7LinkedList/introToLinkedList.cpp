#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* link;
};

//inserting a node at the beginning of the list
void front_load(node** head_ref, int data)
{
	node* temp = new node;
	temp->data = data;
	temp->link = *head_ref;
	*head_ref = temp;
}

//inserting a node at the end of the list 
void rear_load(node** head_ref, int data)
{
	node* temp = new node;
	temp->data = data;
	temp->link = NULL;
	if(*head_ref == NULL)
	{
		*head_ref = temp;
		return;
	}

	node* last = *head_ref;
	while(last->link!=NULL)
	{
		last = last->link;
	}
	last->link = temp;
	return;
}

// inserting a node at the nth position of the list
void nth_load(node** head_ref, int data, int n)
{
	node* temp = new node;
	temp->data = data;
	temp->link = NULL;

	if(n==1)
	{
		temp->link = *head_ref;
		*head_ref = temp;
		return;
	}

	node* last = *head_ref;
	for(int i=1; i<n-1; ++i)		// this is 1 - based. initially, this is pointing to the first node of the list
	{								// now say we need to insert a new node at 3 node
		last = last->link;			// so we need to traverse till 2nd node
	}								// so for i==1 the loop will run and it will store the address of the 2nd node. That's all
	temp->link = last->link;
	last->link = temp;
	return;
}	

//deleting the nth node of the list
void nth_delete(node** head_ref, int n)
{
	node* temp = *head_ref;
	if(n==1)
	{
		*head_ref = temp->link;
		delete(temp);
		return;  
	}
	
	for(int i=1; i<n-1; ++i)
	{
		temp = temp->link;
	}
	//till here temp is pointing to i.e., storing the address of (n-1)th node
	node* temp1 = temp->link;	//new pointer is storing the address of nth node
	temp->link = temp1->link;	//now updating the (n-1)th node link to the address of (n+1)th node that is stored in nth node link
	delete(temp1);				//now free up the space hold up by nth node and hence is deleted
	return;
}

//Reversing the list.
void rev_list()
{
	node *current, *prev, *next;
	current = head;
	prev = NULL;

	while(current!=NULL)
	{
		next = current->link;
		current->link = prev;
		prev = current;
		current = next;	
	}
	head = prev;
}

//print all the elements of the linked list
void print(node* head_ref)
{
	while(head_ref != NULL)
	{
		cout << head_ref->data << " ";
		head_ref = head_ref->link;
	}
}

int main ()
{
	node* head = NULL;
	front_load(&head, 10); //10 
	front_load(&head, 20); //20 10
	front_load(&head, 30); //30 20 10
	front_load(&head, 40); //40 30 20 10

	nth_load(&head, 1, 2); //40 1 30 20 10
	nth_load(&head, 2, 4); //40 1 30 2 20 10

	nth_delete(&head, 4); //40 1 30 20 10
	nth_delete(&head, 1); //1 30 20 10
	print(head);

	rev_list(); //10 20 30 1
	
	cout << endl;
	print(); //10 20 30 1

}	