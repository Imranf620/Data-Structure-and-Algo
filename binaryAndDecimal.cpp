#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    // int n= 8;
    // int ans = 0;
    // int i = 0;

    // while(n!=0){

    //    int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;

    //    n =  n>>1;
    //     i++;

    // }

    // cout<<"The binary equivalent is: "<<ans << endl;

    int n = 1101;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {

        int digit = n % 10;

        ans = digit * (pow(2, i)) + ans;

        n = n / 10;
        i++;
    }

    cout << "The decimal equivalent is: " << ans << endl;

    return 0;
}