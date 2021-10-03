#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int r=1;r<=n;r++){
        for(int i=1;i<=r;i++){
            cout << i << " ";
        }
        for(int i=r-1;i>=1;i--){
            cout << i << " ";
        }

        cout << "\n";
    }
    return 0;
}