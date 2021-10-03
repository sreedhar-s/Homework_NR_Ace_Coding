#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin >> n;
    for(int row=1;row<=n;row++){
        //printing n-r spaces
        for(int i=1;i<=n-row;i++){
            cout << " ";
        };

        //printing row stars
        for(int i=1;i<=row;i++){
            cout<<"*";
        }

        cout << "\n";
    }
};