#include<iostream>
#include<vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1,int n,vector<int> &arr2,int m){
  vector<int>ans;

  for(int i=0;i<n;i++){
    int element = arr1[i];

    for(int j=0;j<m;j++){

      if(element <arr2[j])
      break;

      if(element == arr2[j]){
        ans.push_back(element);
        arr2[j]=-2;
        break;
      }
    }
  }
  return ans;
}

int main(){
  vector<int> arr1={1,2,3,4,5};
  vector<int> arr2={2,3,5,7,9};
  int n = arr1.size();
  int m =arr2.size();

  vector<int> result = findArrayIntersection(arr1,n,arr2,m);

  cout<<"Intersection:";
  for(int num : result){
    cout<<num<<" ";
  }

  return 0;

}
