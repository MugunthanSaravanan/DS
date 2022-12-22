#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int value;
    struct node* next;
};
void display(struct node* header){
    while(header!=NULL){
        cout<<header->value<<"  ";
        header=header->next;
    }
    cout<<'\n';
}
void append(struct node* header,int data){
    struct node* newn;
    newn=new struct node;
    newn->value=data;
    newn->next=NULL;
    while(header!=NULL){
        if(header->next==NULL){
            header->next=newn;
            break;
        }
        header=header->next;
    }
}
struct node* prefix(struct node* header,int data){
    struct node* pren;
    pren=new struct node;
    pren->value=data;
    pren->next=header;
    return pren;
}

void insert(struct node* header,int pos,int data){
    struct node* newn;
    newn=new struct node;
    newn->value=data;
    int count=0;
    while(header!=NULL){
        count++;
        if(pos>1){
        if(pos-1==count){
            newn->next=header->next;
            header->next=newn;
        }
        }
        header=header->next;
    }
}

void del(struct node* header,int pos){
    int count=0;
    while(header!=NULL){
        count++;
        if(pos>1){
            if(pos-1==count){
                struct node* temp;
                temp=header->next->next;
                free(header->next);
                header->next=temp;
            }
        }
        header=header->next;

    }
}

int main(){
    struct node *one,*two,*three,*adds;
    one=new struct node;
    two=new struct node;
    three=new struct node;

    one->value=25;
    one->next=two;
    two->value=87;
    two->next=three;
    three->value=96;
    three->next=NULL;

    cout<<"Append"<<endl;
    append(one,2);
    display(one);

    cout<<"Prefix"<<endl;
    adds=prefix(one,4);
    display(adds);

    cout<<"Insert"<<endl;
    insert(one,8,65);
    display(one);

    cout<<"Delete"<<endl;
    del(one,25);
    display(one);

    return 0;
}


