#include<iostream>
using namespace std;

void PrintArray(int arr[],int size){
  cout<<"Array elements";
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int numbers[]={10,20,30,40,50,60};
  int size=sizeof(numbers)/sizeof(numbers[0]);

  PrintArray(numbers,size);

  return 0;
}



