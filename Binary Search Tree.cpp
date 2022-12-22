#include<iostream>
using namespace std;

struct tree
{
	int data;
	struct tree *lchild;
	struct tree *rchild;
}*t,*temp;

int element;
void inorder(struct tree *);
void preorder(struct tree *);
void postorder(struct tree *);
struct tree * create(struct tree *, int);
struct tree * find(struct tree *, int);
struct tree * insert(struct tree *, int);
struct tree * del(struct tree *, int);
struct tree * findmin(struct tree *);
struct tree * findmax(struct tree *);

int main()
{
	int ch;

	do
	{
	cout<<"\n\t\t\tBINARY SEARCH TREE";
	cout<<"\n\t\t\t*** *** **";
	cout<<"\nMain Menu\n";
	cout<<"\n1.Create\n2.Insert\n3.Delete\n4.Find\n5.FindMin\n6.FindMax";
	cout<<"\n7.Inorder\n8.Preorder\n9.Postorder\n10.Exit\n";
	cout<<"\nEnter ur choice :";
	cin>>ch;
	switch(ch)
		{
		case 1:
			cout<<"\nEnter the data:";
			cin>>element;
			t=create(t,element);
			inorder(t);
			break;
		case 2:
			cout<<"\nEnter the data:";
			cin>>element;
			t=insert(t,element);
			inorder(t);
			break;
		case 3:
			cout<<"\nEnter the data:";
			cin>>element;
			t=del(t,element);
			inorder(t);
			break;
		case 4:
			cout<<"\nEnter the data:";
			cin>>element;
			temp=find(t,element);
			if(temp->data==element)
				cout<<"\nElement "<<element<<"is at "<<temp;
			else
				cout<<"\nElement is not found";
			break;
		case 5:
			temp=findmin(t);
			cout<<"\nMax element= "<<temp->data;
			break;
		case 6:
			temp=findmax(t);
			cout<<"\nMax element= "<<temp->data;
			break;
		case 7:
			inorder(t);
			break;
		case 8:
			preorder(t);
			break;
		case 9:
			postorder(t);
			break;
		case 10:
			exit(0);
		}
	}while(ch<=10);
}

struct tree * create(struct tree *t, int element)
{
	t=(struct tree *)malloc(sizeof(struct tree));
	t->data=element;
	t->lchild=NULL;
	t->rchild=NULL;
	return t;
}

struct tree * find(struct tree *t, int element)
{
	if(t==NULL)
		return NULL;
	if(element<t->data)
		return(find(t->lchild,element));
	else
	if(element>t->data)
		return(find(t->rchild,element));
	else
		return t;
}

struct tree *findmin(struct tree *t)
{
	if(t==NULL)
		return NULL;
	else
	if(t->lchild==NULL)
		return t;
	else
		return(findmin(t->lchild));
}

struct tree *findmax(struct tree *t)
{
	if(t!=NULL)
	{
		while(t->rchild!=NULL)
		t=t->rchild;
	}
	return t;
}

struct tree *insert(struct tree *t,int element)
{
	if(t==NULL)
	{
		t=(struct tree *)malloc(sizeof(struct tree));
		t->data=element;
		t->lchild=NULL;
		t->rchild=NULL;
		return t;
	}
	else
	{
	if(element<t->data)
	{
		t->lchild=insert(t->lchild,element);
	}
	else
	if(element>t->data)
	{
		t->rchild=insert(t->rchild,element);
	}
	else
	if(element==t->data)
	{
		cout<<"element already present\n";
	}
	return t;
	}
}

struct tree * del(struct tree *t, int element)
{
	if(t==NULL)
	cout<<"element not found\n";
	else
	if(element<t->data)
		t->lchild=del(t->lchild,element);
	else
	if(element>t->data)
		t->rchild=del(t->rchild,element);
	else
	if(t->lchild&&t->rchild)
	{
		temp=findmin(t->rchild);
		t->data=temp->data;
		t->rchild=del(t->rchild,t->data);
	}
	else
	{
		temp=t;
		if(t->lchild==NULL)
		t=t->rchild;
		else
		if(t->rchild==NULL)
		t=t->lchild;
		free(temp);
	}
	return t;
}

void inorder(struct tree *t)
{
	if(t==NULL)
	return;
	else
	{
	inorder(t->lchild);
	cout<<"\t"<<t->data;
	inorder(t->rchild);
	}
}

void preorder(struct tree *t)
{
	if(t==NULL)
	return;
	else
	{
	cout<<"\t"<<t->data;
	preorder(t->lchild);
	preorder(t->rchild);
	}
}

void postorder(struct tree *t)
{
	if(t==NULL)
	return;
	else
	{
	postorder(t->lchild);
	postorder(t->rchild);
	cout<<"\t"<<t->data;
	}
}