#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    int s;
    cin >> s;

    // * * *
    // * * *
    // * * *

    // while (i <= s)
    // {
    //     int j = 1;
    //     while (j <= s)
    //     {
    //         cout << " * ";
    //         j++;
    //     };

    //     cout << endl;
    //     i++;
    // };

    // 1 1 1
    // 2 2 2
    // 3 3 3

    while (i <= s)
    {
        int j = 1;
        while (j <= s)
        {
            cout << " " << i << " ";
            j++;
        };

        cout << endl;
        i++;
    };

    return 0;
}