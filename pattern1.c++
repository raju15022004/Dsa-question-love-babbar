// #include<iostream>
// using namespace std;

// int main(){
//      int n;
//      cin>>n;
//      int row=1;

//     while(row<=n){

//         int col=1;
//         int value=row;
//         while(col<=row){
//             cout<<value;
//             value=value+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }


#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        // Print spaces
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

