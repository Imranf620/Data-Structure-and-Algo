#include<iostream>
using namespace std;
int main(){
    int s;
    cin>>s;

    int i = 1;
    while (i<=s)
    {

        int j = 1;

        while (j<=s)
        {
            cout<< " " << j << " ";
            j++;
        };
        cout<<endl;
        i++;
        
    };
    
    

    return 0;
}