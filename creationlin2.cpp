#include<iostream>
using namespace std;
struct listnode
{
    int data;
    struct listnode *next;
};
listnode *head= NULL;
void create()
{
    int n,item;
    listnode *p;
    listnode *current= NULL;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        p=new listnode;
        p->data=item;
        p->next=NULL;
        if(head==NULL)
        {
            head=p;
            current=p;
        }
        else
        {
            current->next=p;
            current=p;
        }
    }
}
void display()
{
    listnode *temp;
    temp=head;
    if(head==NULL)
    {
        cout<<"no";
    }
else
{
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
}
int main()
{
    create();
    display();
    return 0;
}
