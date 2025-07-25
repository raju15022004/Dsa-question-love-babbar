#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>&arr){


  int ans=0;
  for(int i=0; i<arr.size();i++){
     ans=ans^arr[i];
  }

  for(int i=1;i<arr.size();i++){
    ans=ans^i;
  }
  return ans;
}

int main(){
  vector<int> arr={1,2,3,2,4};
  cout<<"Duplicate element is:" <<findDuplicate(arr)<<endl;
  return 0;
}
