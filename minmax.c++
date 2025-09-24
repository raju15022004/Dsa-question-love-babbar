// #include<iostream>
// #include <climits>

// using namespace std;


// int getMin(int num[], int n){
//   int min = INT_MAX;
//   for(int i=0;i<n;i++){
//     if(num[i]<min){
//       min=num[i];
//     }
//   }
//   return min;
// }

// int getMax(int num[], int n){
//   int max = INT_MIN;
//   for(int i=0;i<n;i++){
//     if(num[i]>max){
//       max=num[i];
//     }

//   }
//   return max;
// }

// int main(){
//   int size;
//   cin>>size;

//   int num[100];

//   for(int i=0; i<size;i++){
//     cin>>num[i];
//   }

//   cout<<"Maxmum value is"<<getMax(num,size)<<endl;
//   cout<<"Minimum value is"<<getMin(num,size)<<endl;
//   return 0;
// }

///////////////// reverse ///////////////////

#include<iostream>
using namespace std;

void reverse(int arr[],int n){
  int start=0;
  int end=n-1;

  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

void printArray(int arr[], int n){
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int arr[6]={2,4,5,7,8,9};
  int brr[5]={2,6,3,9,4};

  reverse(arr,8);
  reverse(brr,7);

  printArray(arr,6);
  printArray(brr,5);

  return 0;
}
