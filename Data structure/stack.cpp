#include<bits/stdc++.h>

using namespace std;

#define MAX 5

int arr[MAX];
int top = -1;

void push(){
    if(top==MAX-1){
        cout<<"Stack overflow"<<endl;
        return;
    }
    int n;
    cin>>n;
    arr[top+1] = n;
    top++;
    cout<<"Data insert successfully!"<<endl;
    return;
}

void pop(){
    if(top<0){
        cout<<"Stack is empty"<<endl;
        return;
    }
    top--;
    cout<<"Data pop successfully!"<<endl;
    return;
}

void TOP (){
    if(top<0){
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<"TOP: "<<arr[top]<<endl;
    return;
}

void display(){
    if(top<0){
        cout<<"Stack is empty"<<endl;
        return;
    }
    for(int i=0; i<=top; ++i){
        cout<<arr[i]<<" "<<endl;
    }
}


int main()
{
  while(true){
    cout<<" 1.push \n 2.pop \n 3.top \n 4.display\n ";
    int kase;
    cin>>kase;

    switch(kase){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            TOP();
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
