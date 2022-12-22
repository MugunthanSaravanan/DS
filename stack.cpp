#include<iostream>
using namespace std;
int n=6;
int top=-1;

void push(int n,int *arr){
    if(top<4){
    top++;
    arr[top]=n;
    }
    else{
        cout<<"Stack overflow"<<endl;
    }
}


void display(int *arr){
     for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void pop(int *arr){
    if(top==-1){
        cout<<"Stack underflow";
    }
    else{
        top--;
    }
}


int main(){
    int arr[n];
    for(int i=0;i<6;i++){
        push(i+1,arr);
    }
    cout<<"Displaying all elements in stack : ";
    display(arr);
    pop(arr);
    cout<<"Displaying all elements in stack after poping : ";
    display(arr);
    return 0;
}

