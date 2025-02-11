#include <iostream>
using namespace std;

int main()
{

    int totalRows;

    cout << "Enter the number of rows: ";
    cin >> totalRows;

    int currentRow = 1;
    char initialVal = 'A';

    while (currentRow <= totalRows)
    { 
        int col = 1;
        while(col<currentRow){
            cout<<initialVal<<" ";
            col++;
            initialVal++;
        }
        cout<<endl;
        currentRow++;
    }
}
