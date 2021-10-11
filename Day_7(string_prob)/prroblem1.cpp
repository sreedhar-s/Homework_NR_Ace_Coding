#include<iostream>
using namespace std;

int main(){
    string s;
    cout << "Enter the string : ";
    cin >> s;
    int n = s.length();
    for(int i=0;i<n;i++){
        int val;
        if(s[i] >= 'a' && s[i] <= 'z'){
            val = s[i] - 'a';
        }
        for(int j=0;j<=val;j++){
            cout << s[i];
        }
    }
    return 0;
}  