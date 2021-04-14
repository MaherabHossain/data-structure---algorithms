#include<bits/stdc++.h>

using namespace std;

int bs(int arr[], int n, int number)
{

    int start = 0;
    int end   = n-1;

    while(start<=end){
        int mid   = start + (end-start)/2;
        if(arr[mid] == number) return mid;
        else if(arr[mid] > number){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }

    return -1;
}


int main()
{
  int kase;
  cin>>kase;
  while(kase--){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }

    int number;
    cin>>number;

    int res = bs(arr,n,number);

    if(res==-1){
        cout<<"Number not found!"<<endl;
    }else{
        cout<<"Number found at pos: "<<res+1<<endl;
    }
  }
  return 0;
}
