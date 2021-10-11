#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value o n : ";
    cin >> n;
    float sum = 0;
    for(int i=1;i<=n;i++){
        int num = 2*i+1;
        int den = 2*i+5;
        sum += num/(den+0.0);
    }
    cout << sum;
    return 0;
}