#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    float sum = 0;
    for(int i=1;i<=n;i++){
        sum += (i/(i+1+0.0));
    }
    cout << sum ;
}