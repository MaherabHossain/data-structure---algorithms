#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node* next;
};


struct node* head;

void push(int val){

    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    if(head==NULL){
        head = temp;
    }else{
        struct node* temp2;
        temp2 = head;

        while(temp2->next!=NULL){
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
}

void print(){

    struct node* temp;

    temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}

int main()
{
  head = NULL;
  int val;
  cout<<"Enter first number: ";
  cin>>val;
  while(val>0){;
        push(val);
        cout<<"Enter next number: ";
        cin>>val;
  }
  print();
  return 0;
}