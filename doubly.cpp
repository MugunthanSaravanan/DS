#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *prev;
   struct Node *next;
};
int main() {
   struct Node *header=NULL;
   struct Node *N1,*N2,*N3;
   N1=new struct Node;
   N1->data=1;
   N1->prev=NULL;
   N1->next=NULL;
   N2->data=2;
   N2->prev=NULL;
   N2->next=NULL;
   N3->data=3;
   N3->prev=NULL;
   N3->next=NULL;
   N1->next=N2;
   N2->prev=N1;
   N2->next=N2;
   N3->prev=N2;

}
