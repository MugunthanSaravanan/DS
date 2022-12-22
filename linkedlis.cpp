#include<iostream>
#include<array>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* createlist(int value[],int len)
{
    struct node* head=NULL;
    struct node* previousnode=NULL;
    for(int i=0;i<=len;i++)
    {
        struct node* newnode=new struct node;
        newnode->data=value[i];
        newnode->next=NULL;
        if(i==0)
        {
            head=newnode;
        }
        else
        {
            previousnode->next=newnode;
        }
        previousnode=newnode;
    }
    return head;
}
void printlist(struct node* header)
{
    struct node* temp=header;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
int main()
{
    int val[]={2,5,7,8,9};
    struct node* header=createlist(val,5);
    printlist(header);

}
