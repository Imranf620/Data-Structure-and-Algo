#include <iostream>
using namespace std;

int main()
{
    int totalRows;
    cout << "Enter the number of rows: ";
    cin >> totalRows;

    int currentRow = 1;
    while (currentRow <= totalRows)
    {

        int col = 1;
        int spaces = (totalRows - currentRow + 1 - 1);

        while (col <= spaces)
        {
            cout << " ";
            col++;
        };

        int starts = 1;
        while(starts<=currentRow){
            cout << "*";
            starts++;
        }
        cout<<endl;
        currentRow++;

    }

    return 0;
}