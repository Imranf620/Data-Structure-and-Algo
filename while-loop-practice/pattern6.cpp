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
        while(col<=currentRow){
            cout<<"*"<<" ";
            col++;
        }

        cout<<endl;
        currentRow++;
    }
}