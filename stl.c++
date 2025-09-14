// #include<iostream>
// #include<array>

// using namespace std;
// int main(){

//   int basic[3]={1,2,3};

//   array<int,4>a={1,2,3,4};

//   int size=a.size();

//   for(int i=0; i<size;i++){
//     cout<<a[i]<<endl;
//   }

//   cout<<"element at 2nd Index->"<<a.at(2)<<endl;

//   cout<<"Empty or not->"<<a.empty()<<endl;

//   cout<<"first Element->"<<a.front()<<endl;
//   cout<<"last Element->"<<a.back()<<endl;

// }


#include<iostream>
#include<deque>

using namespace std;

int main(){

  deque<int>d;

  d.push_back(1);
  d.push_front(2);

  cout<<endl;

  cout<<"print First Index Element->"<<d.at(1)<<endl;
}
