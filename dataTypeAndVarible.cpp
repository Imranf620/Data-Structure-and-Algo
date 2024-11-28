#include<iostream>
using namespace std;

int main(){

    int num1, num2;
    cout<<"Please enter a number"<<endl;
    cin >> num1;
    cout<<"Please enter another number"<<endl;
    cin >> num2;

    
    if(num1 % num2 == 0){
        cout << num1 << " is divisible by " << num2 << endl;
    }else{
        cout << num1 << " is not divisible by " << num2 << endl;
    }

    int a = 10;
    float f = 0.5;
    double d = 0.000;
    bool b  = false;
    char c = 'a';
    string s = "Hello!";

    cout << "Size of int: " << sizeof(a) << endl;
    cout << "Size of float: " << sizeof(f) << endl;
    cout << "Size of double: " << sizeof(d) << endl;
    cout << "Size of bool: " << sizeof(b) << endl;
    cout << "Size of char: " << sizeof(c) << endl;
    cout << "Size of string: " << sizeof(s) << endl;

    return 0;
}