#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int sum = 0,res;
    for(int i=0;i<5;i++){
        sum += arr[i];
    }
    for(int j=0;j<5;j++){
        res += arr[j]*(sum - arr[j]);
    }
    cout << res;
    return 0;
}