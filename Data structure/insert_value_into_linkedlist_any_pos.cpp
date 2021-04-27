#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node* next;
};


struct node* head;



void print(){

    struct node* temp;

    temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}
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

int count_number(){

    struct node* temp;

    temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_first(){
    int n;
    cout<<"Enter value: ";
    cin>>n;
    struct node* temp;

    temp->data = n;
    temp->next = head;
    head = temp;
    print();
}

void insert_any_possition (int pos){
    int n;
    cout<<"Enter value: ";
    cin>>n;

    struct node* value = (struct node*) malloc(sizeof(struct node));

    value->data = n;
    struct node* temp;

    int count = 0;
    struct node* first_part = (struct node*) malloc(sizeof(struct node));
    first_part = head;
    temp = first_part->next;
    while( true ){
        count++;
        if(count==pos-1){
            break;
        }
        first_part = temp;

        temp = temp->next;

    }
    first_part->next = value;
    value->next = temp;
    print();


}

int main()
{
  head = NULL;
  int val;
  cout<<"Enter first number (enter -1 for exit): ";
  cin>>val;
  while(val>0){;
        push(val);
        cout<<"Enter next number (enter -1 for exit): ";
        cin>>val;
  }
  print();
  while(true){
    cout<<"Which possition you want to insert: ";
    int pos;
    cin>>pos;
    if(pos<0){
        break;
    }
    if(pos==1){
        insert_first();

    }else if(pos==count_number()+1){
        cin>>val;
        push(val);
        print();
    }else{
        insert_any_possition(pos);
    }
  }
  return 0;
}


