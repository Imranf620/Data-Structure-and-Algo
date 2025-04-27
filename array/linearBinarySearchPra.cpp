#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right =size - 1;
    while (left <= right)

    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else
        {
            if (arr[mid] < target)
            {
                left = mid + 1;

            }
            else
            {
                right = mid - 1;
           
            }
        }
    };
    return -1;
};
int LinearSearch(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        };
    }
    return -1;
};
int main()
{

    int arr[] = {3, 7, 12, 15, 18, 22, 29, 34, 37, 42, 56, 63, 72, 81, 99};

    int linearTarget = LinearSearch(arr, 15, 37);

    if (linearTarget != -1)
    {
        cout << "The index in linear is: " << linearTarget<<endl;
    }
    else
    {
        cout << "The index in linear is not found.";
    }

    int binaryTarget = binarySearch(arr, 15, 37);
    if (binaryTarget != -1)
    {
        cout << "The Binary search linear is: " << binaryTarget<<endl;
    }
    else
    {
        cout << "The Binary search linear is not found";
    }

    return 0;
};