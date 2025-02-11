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
        while (col <= currentRow){
            char c;
            c = 'A' +totalRows-currentRow+col-1;
            cout << c << " ";
            col++;

        }
        cout << endl;
        currentRow++;
    }
}