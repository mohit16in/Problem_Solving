//Problem: Pairwise swap elements of a linked list
#include <bits/stdc++.h>
using namespace std;


#define mod                 1000000007
#define inf                 1e18
#define ll                  long long
#define pb                  push_back
#define w(t)                int t; cin >> t; while(t--)
#define vi                  vector<int>
#define pii                 pair<int, int>
#define mii                 map<int, int>
#define mci                 map<char, int>
#define mp                  make_pair


class node
{
public:
	int data;
	node* link;
};


void insert(node** head_ref, int data)
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
	while(last->link != NULL)
	{
		last = last->link;
	}
	last->link = temp;
	return;
}

node* swap_pairs(node* head_ref)
{
	if(head_ref->link == NULL)		//enduring that atleast two nodes are present 
	{
		return head_ref;
	}
	node* first = head_ref;			//pointing to first node
	node* second = first->link;		//pointing to second node
	node* third = second->link;		//pointing to third node
	head_ref = second;				//pointing to second node
	while(1)
	{
		second = first->link;		
		third = second->link;
		
		second->link = first;		//link of second is now pointing to 1st node
		if(third==NULL || third->link==NULL)//if either third node does not exist or fourth node does not exist then the link of first node will point to third node (null or actual)
		{
			first->link = third;
			break;
		}
		else						//else the first will point to fourth node
			first->link = third->link;

		first = third;				//then recursion is made and first will point to third, second to fourth and third to fifth
	}
	return head_ref;
}


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
	insert(&head, 10);
	insert(&head, 20);
	insert(&head, 30);
	insert(&head, 40);

	head = swap_pairs(head);
	print(head);
}