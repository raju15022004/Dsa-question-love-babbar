#include<iostream>
using namespace std;

int main(){
  int n,pos;

  cout<<"enter array size";
  cin>>n;

  int arr[200];

  cout<<"enter array element :";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  cout<<"\nArray elements:";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  cout<<"\n\nEnter the index to delete to (starting from 0):";
  cin>>pos;

  if(pos< 0 || pos>=n){
    cout<<"Invalid index!";

  }
  else{
    for(int i=pos;i<n-1;i++){
      arr[i]==arr[i+1];
    }
    n--;

    for(int i=0;i<n;i++){
      cout<<arr[i]<<"";
    }
  }

  return 0;
}
