// #include<iostream>
// using namespace std;

// int main(){
//   int n=10;

//   int a=0;
//   int b=1;

//   cout<<a <<" "<<b<<" ";
//   for(int i=1; i<=n; i++){

//     int nextNumber=a+b;
//     cout<<nextNumber<<" ";

//     a=b;
//     b=nextNumber;

//   }
// }

// ======================================

// #include<iostream>
// using namespace std;

// int main(){
//   int n;

//   cout<<"emter the value of n"<<endl;
//   cin>>n;

//   bool isprime=1;

//   for(int i=2; i<=n; i++){
//     if(n%i==0){
//     isprime=0;
//     break;
//   }
//  }

//  if(isprime==0){
//   cout<<"Not a prime Number"<<endl;

//  }
//  else{
//   cout<<"is a prime number"<<endl;
//  }
// }

// +++++++++++++++++++++++++ continue ++++++++++

#include<iostream>
using namespace std;

int main(){

  for(int i=0; i<5; i++){

    cout<<"Hello"<<endl;
    cout<<"hey"<<endl;
    continue;

    cout<<"Reply toh karde"<<endl;
  }
}

