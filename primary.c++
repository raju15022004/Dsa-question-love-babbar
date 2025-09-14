#include<iostream>
#include<map>
using namespace std;

int main(){

  map<int,string>studentDB;

  studentDB[101]="Raju";
  studentDB[102]="Sonam";
  studentDB[103]="Shivek";

  for(auto &s : studentDB){
    cout<<"Roll No:"<<s.first<<",Name:"<<s.second<<endl;

  }

  return 0;
}
