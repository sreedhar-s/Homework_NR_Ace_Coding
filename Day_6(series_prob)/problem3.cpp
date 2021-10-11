#include<iostream>
using namespace std;

int fact(int n){
    if(n == 1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    float sum = 0;
    for(int i=1;i<=n;i++){
        int num = (i*(i+1))/2;
        int den = fact(i);

        sum += num/(den+0.0);
    }
    cout << sum;
    return 0;
}