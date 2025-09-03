#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
  int start=0,end=n-1;
  while (start<end)
  {
    swap(arr[start],arr[end]);
    start++;
    end--;

  }

}

void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int arr[]={1,2,3,4,5,6};
  int N=sizeof(arr)/sizeof(arr[0]);

  cout<<"original array:";
  printArray(arr,N);

  reverseArray(arr,N);

  cout<<"Reversed array:";
  printArray(arr,N);

  return 0;
}
