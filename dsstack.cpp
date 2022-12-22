#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 5
int top=-1;
int stack_arr[MAX];
void push()
{
    int pushed_item;
    if(top==(MAX-1))
    {
        cout<<" stack overflow"<<endl;
    }
    else
    {
        cout<<"enter the item to be pushed in stack:";
        cin>>pushed_item;
        top= top+1;
        stack_arr[top]=pushed_item;
    }
}
void pop()
{
    if(top==1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        cout<<"popped element is:"<<stack_arr[top]<<endl;
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==1)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack elements:"<<endl;
        for(i=top;i>=0;i--)
        {
            cout<<" "<<stack_arr[i];
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.quit"<<endl;
        cout<<"enter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout<<"wrong choice"<<endl;
        }
    }
}
