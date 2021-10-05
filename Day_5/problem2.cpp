#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    float sum = 0;

    for(int i=1;i<=n;i++){
        sum += pow(i,4);
    }

    cout << sum << " ";
    return 0;
}