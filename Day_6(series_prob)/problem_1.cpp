#include<iostream>
using namespace std;

int fact(int i){
    if(i == 1){
        return 1;
    }else{
        return i*fact(i-1);
    }
}

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    float sum = 0;
    for(int i=1;i<=n;i++){
        int num = i;
        int den = fact(i);

        sum += num/(den+0.0);
    }
    cout << sum;
} 