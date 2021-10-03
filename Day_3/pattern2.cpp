#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    //Handling first part
    for(int r=1;r<=n/2;r++){
        //Printing n/2 - r spaces
        for(int i=1;i<=n/2-r+1;i++){
            cout << " ";
        }

        //Printing r stars
        for(int i=1;i<=2*r-1;i++){
            cout << "*";
        }

        cout << "\n";
    }

    //Handling middile part
    if(n%2 == 1){
        for(int i=1;i<=n;i++){
            cout << "*";
        }
        cout << "\n";
    }

    //Handling last part
    for(int r=n/2;r>=1;r--){
        //Printing n/2 - r spaces
        for(int i=1;i<=n/2-r+1;i++){
            cout << " ";
        }

        //Printing r stars
        for(int i=1;i<=2*r-1;i++){
            cout << "*";
        }

        cout << "\n";
    }
    return 0;
}