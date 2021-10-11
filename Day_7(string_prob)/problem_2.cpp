#include<iostream>
using namespace std;

string convert(string s){
    int len = s.length();
    for(int i=0;i<=len;i++){
        if(s[i] >= 'A' && s[i]<='Z'){
            s[i] = s[i]+('a'-'A');
        }else if(s[i]>= 'a' && s[i]<='z'){
            s[i] = s[i]-('a'-'A');
        }
    }
    return s;
}

int main(){
    string s = "SrEEdhAr#&98765";
    cout << convert(s);
    return 0;
}