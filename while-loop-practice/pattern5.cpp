#include <iostream>
using namespace std;

int main()
{

    int totalRows;

    cout << "Enter the number of rows: ";
    cin >> totalRows;

    int currentRow = 1;
    int numbToPrint = 1;

    while (currentRow <= totalRows)
    {
        int col = 1;
        while(col<=totalRows){
            cout<<numbToPrint<<" ";
            numbToPrint++;
            col++;
        }
        cout<<endl;
        currentRow++;
    }
}