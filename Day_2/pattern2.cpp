#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin >> n;
    for(int r=1;r<=n-r;r++){
        //Printing n-r spaces
        for(int i=1;i<=n-r;i++){
            cout << " ";
        }

        //printing 2*n-1 stars
        for(int i=1;i<=2*r-1;i++){
            cout << "*";
        }
        cout<<"\n";
    }
}