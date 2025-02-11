#include <iostream>
using namespace std;

int main()
{

    int totalRows;

    cout << "Enter the number of rows: ";
    cin >> totalRows;


    char ch = 'A';
    int currentRow = 1;

    while (currentRow <= totalRows)

    {
        int col = 1;
        while (col<=totalRows)
        {
            cout<<ch<<" ";
            col++;

        }
        cout<<endl;
        ch++;
        currentRow++;
        
    }
}