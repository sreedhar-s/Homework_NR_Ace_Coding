#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for(int r=n;r>=1;r--){
        //printing n-r spaces
        for(int i=1;i<=n-r;i++){
            cout << " ";
        }

        //Printing n stars
        for(int i=1;i<=2*r-1;i++){
            cout << "*";
        }

        cout << "\n";
    }
}