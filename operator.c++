// #include<iostream>
// using namespace std;

// int main(){
//   int a=4;
//   int b=6;

//   cout<<"a&b"<<(a&b)<<endl;
//   cout<<"a|b"<<(a|b)<<endl;
//   cout<<"~a"<<~a<<endl;
//   cout<<"a^b"<<(a^b)<<endl;
// }


// ===============================

#include<iostream>
using namespace std;

int main (){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;

  cout<<"printing cout from 1 to n"<<endl;
  int i=1;
  for(; ;){
    if(i<=n){
      cout<<i<<endl;
    }
    else{
      break;
    }
    i++;
  }

}
