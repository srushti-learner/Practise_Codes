#include<iostream>
using namespace std;

struct node {
	int data;
	node* next;
};



node* getNewNode (int data)
{
	node* temp = new node ();
	temp->data=data;
	temp->next=NULL;
	return temp;
}

node* Insert (node* head,int data)
{
	if (head==NULL)
	{
		head=getNewNode(data);
		return head;
	}
	node* temp=head;
	while(temp->next !=NULL)
	{
	    temp=temp->next;
	}
	temp->next=getNewNode(data);
	return head;


}

void Print (node* head)
{
	node* temp = head;

	while(temp != NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;

	}
}

int main()
{
	node* head =NULL;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>x;	
		head=Insert(head,x);
		
	}

	Print(head);
	return 0;
}

