#include <iostream>
using namespace std;

int main()
{
    int totalRows;
    cout << "Enter the number of rows: ";
    cin >> totalRows;

    int currentRow = 1;
    while(currentRow <= totalRows)
    {

        int col = 1;
        int spaces = totalRows  - currentRow;
        

        while (col<=spaces)
        {
            cout<< " ";
            col++;
        }
        int rowPrint = 1;
        while(rowPrint<=currentRow){
            cout<<currentRow;
            rowPrint++;
        }
        cout<<endl;
        currentRow++;
        
    };
}