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
        int col =1;
        int starts = totalRows-currentRow+1;
        while(col<=starts){
            cout<<currentRow << " ";
            col++;
        }
    
        cout<<endl;
        currentRow++;

    }
}