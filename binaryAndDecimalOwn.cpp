#include <iostream>
using namespace std;

int main()
{
    // int num = 123;

    // int sum = 0;
    // int result = 0;
    // while (num > 0)
    // {
    //     int digit = num % 2;
    //     num = num / 2;
    //     sum = sum * 10 + digit;
    // }
    // int binary;

    // while (sum > 0)
    // {

    //     int digit = sum % 10;
    //     sum = sum / 10;
    //     result = result * 10 + digit;
    // }
    // cout << "Reversed binary: " << result << endl;

    int num = 10;

    while((num&1)!=0){
        num = num >> 1;
    }
        cout << num << endl;

    return 0;
}