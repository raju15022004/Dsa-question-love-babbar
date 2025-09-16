// #include<iostream>
// using namespace std;

// int main(){
    //  int a;
    //  cin>>a;
    //  if(a>0){
    //  cout<<"A is positive"<<endl;
    //  }
    //  else{
    //     cout<<"A is negative"<<endl;
    //  }

    // int a,b;
    // cin>> a >> b;
    // cout<<"value of a and b is "<<a <<" "<< b <<endl;

    // int a,b;
    // cout<<"Enter the value of a"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b"<<endl;
    // cin>>b;

    // if(a>b){
    //     cout<<"A is greater"<<endl;
    // }
    // if(b<a){
    //     cout<<"B is greater"<<endl;
    // }

    // int a=2;
    // int b=a+1;

    // if((a=3)==b){
    //     cout<<a;
    // }
    // else{
    //     cout<<a+1;
    // }

//     int a=24;

//     if(a>20)
//     {
//         cout<<"Raju";
//     }
//     else if(a==24){
//         cout<<"Kuamr";
//     }
//     else{
//         cout<<"Sahani";
//     }
//     cout<<a;
// }

// ++++++++++++++++++++++ while +++++++++++++++++

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i=i+1;
    }

    int n;
    cin >> n;

    int i=1;
    int sum=0;

    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"value of sum is "<<sum<<endl;

    int n;
    cin>>n;

    int i=2;
    while(i<n){

        if(n%i==0){
            cout<<"Not prime"<<endl;
        }
        else{
            cout<<"prime"<<endl;
        }
        i=i+1;
    }

}

// **************** pattern ********************

// #include<iostream>
// using namespace std;

// int main(){
    // int n;
    // cin>>n;

    // int i=1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

//     int n;
//     cin >> n;

//     int i =1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }

// }
