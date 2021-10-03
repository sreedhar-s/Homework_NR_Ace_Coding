#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin  >> n;

    //Handling first part
    for(int r=1;r<=n/2;r++){
        for(int i=1;i<=r-1;i++){
            cout << " ";
        }
        cout << "*";
        for(int i=1;i<=n-2*r;i++){
            cout << " ";
        }
        cout << "*";
        cout << "\n";
    }

    //Handling middle part
    if(n%2 == 1){
        for(int r=1;r<=n/2;r++){
            cout << " ";
        }

        cout << "*" << "\n";
    }

    //Handling last part
    for(int r=n/2;r>=1;r--){
        for(int i=1;i<=r-1;i++){
            cout << " ";
        }
        cout << "*";
        for(int i=1;i<=n-2*r;i++){
            cout << " ";
        }
        cout << "*";
        cout << "\n";
    }
    return 0;
}