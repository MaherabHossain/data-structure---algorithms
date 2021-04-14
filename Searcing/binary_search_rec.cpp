#include<bits/stdc++.h>

using namespace std;

int bs(int arr[], int number, int start, int end){

    if(start>end) return -1;

    int mid   = start + (end-start)/2;

    if(arr[mid]==number) return mid;
    else if(arr[mid]>number){
        bs(arr,number,start,mid-1);
    }else{
        bs(arr,number,mid+1,end);
    }
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

    int res = bs(arr,number,0,n);

    if(res==-1)
        cout<<"Number not found!"<<endl;
    else
        cout<<"Number found at pos: "<<res+1<<endl;
  }
  return 0;
}
