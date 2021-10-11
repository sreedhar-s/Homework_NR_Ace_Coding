#include<iostream>
using namespace std;

int main(){
    int a,b,res;
    char op;
    cout << "Enter 2 numbers for the calculation"<< "\n";
    cin >> a >> b;
    cout << "Enter the operator"<<"\n";
    cin >> op;
    if(op=='+'){
        res = a + b;
    }
    else if(op=='-'){
        res = a - b;
    }
    else if (op == '*')
    {
        res = a * b;
    }
    else if (op == '/')
    {
        res = a / b;
    }
    else{
        cout << "wrong operator"<<"\n";
    }
    cout <<" "<< res;
    return 0;
}