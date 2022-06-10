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

node* Insertfront (node*head,int data)
{
	if (head==NULL)
	{
		head=getNewNode(data);
		return head;
	}
	node* temp=getNewNode(data);
	temp->next=head;
	head=temp;
	return head;
	
}

node* Inserttail (node* head,int data)
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

node* deletenode (node* head , int position)
{
	node* temp1= head;
	if (position==1)
	{
		head=temp1->next;
		delete temp1;
		return head;
	
	}
	
	for (int i=0;i<position-2;i++)
	{
		temp1=temp1->next;
	}
	node* temp2=temp1->next;
	temp1->next=temp2->next;
	delete temp2;
}

void Print (node* head)
{
	node* temp = head;

	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;

	}
}

int main()
{
	node* head =NULL;
	int n,x;
	cin>>n;
	int position;
	for(int i=0;i<n;i++)
	{
	    cin>>x;	
		head=Inserttail(head,x);
		
	}
	cin>>position;
	head=deletenode(head,position+1);
	Print(head);
	return 0;
}

