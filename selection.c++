#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int minIndex=i;
    for(int j=0;j<n;j++){
      if(arr[j]<arr[minIndex]){
      int minIndex=j;

    }
  }
  swap(arr[i],arr[minIndex]);
}
}

int main(){
  int n;
  cout<<"Enter size of array:";
  cin>>n;

  int arr[n];
  cout<<"Enter elements:";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  selectionSort(arr,n);

  cout<<"Sorted array:";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}
