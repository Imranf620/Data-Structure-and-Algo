#include <iostream>

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void reverseArr(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

int main()
{
    int arr[5] = {1, 7, 3, 6, 3};

    reverseArr(arr, 5);

    printArr(arr, 5);
    return 0 ;
}