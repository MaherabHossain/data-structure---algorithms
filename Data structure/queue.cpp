#include<bits/stdc++.h>

using namespace std;

#define MAX 5

int arr[MAX];

int front = -1;

int top = -1;



void enqueqe(){
    if(top==MAX-1){
        cout<<"Queue Overflow!"<<endl;
    }else{
    if(front==-1)
        front = 0;
    int n;
    cin>>n;
    top++;
    arr[top] = n;
    cout<<"Data insert successfully!"<<endl;
    }
}
void dequeue(){
    if(front==-1 || top<front){
        cout<<"Queue is underflow!"<<endl;;
    }else{
    front++;
    cout<<"Data deleted successfully!"<<endl;
    }
}

void FRONT(){
    if(front==-1){
        cout<<"queue is empty!"<<endl;
    }else{
    cout<<"Front: "<<arr[front]<<endl;
    }
}

void display(){
    if(front==-1){
        cout<<"Queue is empty!"<<endl;
    }else{
    for(int i = front; i <= top; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
}


int main()
{
    while(true){
    cout<<" 1.enque \n 2.dequeue \n 3.front \n 4.display\n 4.exit\n ";
    int kase;
    cin>>kase;

    switch(kase){
        case 1:
            enqueqe();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            FRONT();
            break;
        case 4:
            display();
            break;
        case 5:
            return 0;
        default:
            cout<<"Invalid input try again!"<<endl;

    }
  }
  return 0;
}
