#include<iostream>
#include<map>
using namespace std;

int main(){

  map<int,string>studentDB;

  studentDB[2232151]="Raju";
  studentDB[2232174]="Sonam";
  studentDB[2232167]="Shivek";

  for(auto &s : studentDB){
    cout<<"Roll No:"<<s.first<<",Name:"<<s.second<<endl;

  }

  return 0;
}
