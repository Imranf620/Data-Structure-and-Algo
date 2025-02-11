#include <iostream>
using namespace std;

int main()
{

    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;

    // int sum = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }

    // cout << "Sum of first " << n << " natural numbers: " << sum << endl;

    // for (int i = 1; i <= 10; i++)
    // {

    //     if (i % 2 == 0)
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         cout << i << " ";
    //     }
    //     if (i == 9)
    //     {
    //         break;
    //     }
    // }

    int prev = 0;
    int curr =  1;
    int prev2 =1;
    int next = prev + curr;

    cout << "Fibonacci series: " << prev  << " ";

    for (int i = 0; i <10; i++){
        cout<< next << " "; 
        prev = curr;
        curr = next;
        next = prev + curr;

    }

    
}