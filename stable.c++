#include<iostream>
#include<vector>
using namespace std;

void bubblesortstable(vector<pair<int,char>>&arr){
  int n=arr.size();
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i;j++){
      if(arr[j].first>arr[j+1].first){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}


void bubblesortUnstable(vector<pair<int,char>>&arr){
  int n=arr.size();
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i;j++){
      if(arr[j].first>arr[j+1].first){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}


void printArray(const vector<pair<int,char>> &arr){
  for(auto &p : arr){
    cout<<"("<<p.first<<","<<p.second<<")";
  }
  cout<<endl;
}

int main(){
  vector<pair<int,char>>arr1={{4,'a'},{2,'x'},{4,'b'},{3,'y'}};
  vector<pair<int ,char>>arr2=arr1;

  cout<<"original Array:\n";
  printArray(arr1);

  bubblesortstable(arr1);
  cout<<"\nAfter stable Bubble sort:\n";
  printArray(arr1);

  bubblesortUnstable(arr2);
  cout<<"\nafter unstable Bubble sort:\n";
  printArray(arr2);

  return 0;
}
