#include<iostream>
using namespace std;

void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void sortOne(int arr[],int n){
  int left=0,right=n-1;
  while(left<right){
    while(arr[left]==0 && left<right){
      left++;
    }
    while(arr[right]==1 && left<right){
      right--;
    }
    if(left<right){
      swap(arr[left],arr[right]);
      left++;
      right--;
    }
  }
}

int main(){
  int arr[8]={1,3,6,7,3,8,9};
  sortOne(arr,8);
  printArray(arr,8);

  return 0;
}
