#include <iostream>
using namespace std;

int main()
{
    int totalRows;
    cout << "Enter the number of rows: ";
    cin >> totalRows;

    int currentRow = 1;
    int intialNum = 1;

    while(currentRow <= totalRows){
        int col  = 1;
        int spaces = totalRows - currentRow;
        while ( col<=spaces)
        {
            cout<< " ";
            col++;
        }
        
        int  totalNumPrint = 1;
        while(totalNumPrint<=currentRow){
            cout<< intialNum;
            intialNum++;
            totalNumPrint++;
        }
        cout<<endl;
        currentRow++;
        

    }

}
