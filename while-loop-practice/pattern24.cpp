#include <iostream>
using namespace std;

int main()
{
    int totalRows;
    cout << "Enter the number of rows: ";
    cin >> totalRows;

    int currentRow = 1;
    int intialNum = 1;

    while (currentRow <= totalRows)
    {
        int spaces = totalRows - currentRow + 1;
        int col = 1;
        while (col <= spaces)
        {
            cout << " ";
            col++;
        }

        int rowPrint = 1;
        while (rowPrint <= (currentRow - 1))
        {
            cout << rowPrint;
            rowPrint++;
        }
        cout << currentRow;

        int secondCol = 1;
        int numToPrint = currentRow - 1;

        while (secondCol <= numToPrint)
        {
            cout << currentRow - secondCol;
            secondCol++;
        }
        cout << endl;
        currentRow++;
    };
}