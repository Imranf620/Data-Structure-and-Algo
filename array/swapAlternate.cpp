#include <iostream>

void alternateArr(int arr[], int n)
{
    int first = 0;
    int second = 1;
    int temp = arr[0];

    while (second < n)
    {
        // std::swap(arr[first], arr[second]);
        arr[first] = arr[second];
        arr[second] = temp;

        first = first + 2;
        second = second + 2;
        temp = arr[first];
    };
}

void printArr(int arr[], int n)
{
    int size = 0;
    while (size != n)
    {
        std::cout << " " << arr[size] << " ";
        size++;
    }
    std::cout << std::endl;
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    alternateArr(arr, 7);
    printArr(arr, 7);
    return 0;
}