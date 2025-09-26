// #include<iostream>
// using namespace std;

// void bubblesort(int arr[],int n){
//   int i,j;
//   bool swapped;
//   for(int i=0;i<n;i++){
//     swapped=false;
//     for(int j=0;j<n-i-1;j++){
//       if(arr[j]>arr[j+1]){
//         swap(arr[j],arr[j+1]);
//         swapped=true;
//       }
//     }
//     if(swapped==false);
//     break;


//   }
// }

// void printarray(int arr[],int size){
//   int i;
//   for(int i=0;i<size;i++){
//     cout<<" "<<arr[i];
//   }
// }

// int main(){
//   int arr[]={64,34,25,12,22,11,90};
//   int N=sizeof(arr)/sizeof(arr[0]);
//   bubblesort(arr,N);
//   cout<<"sorted array:\n";
//   printarray(arr,N);
//   return 0;
// }


#include<iostream>
using namespace std;

int main(){
  int arr[]={2,3,4,6,7,89,2};
  int n=sizeof(arr)/sizeof(arr[0]);


  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }

  cout<<"Sorted Array:";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;

}
