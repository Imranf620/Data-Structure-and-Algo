#include <iostream>
using namespace std;
int main(){
    
    int  a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    int i = 2;

     while (i<a)
     {
        if(a%i==0){
            cout<<"the number is not prime for: "<< i <<endl;
        }else{
            cout<<"the number is prime for: "<<i<<endl;
        }
        i++;
     };
     
    
}