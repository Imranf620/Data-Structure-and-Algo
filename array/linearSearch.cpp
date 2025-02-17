#include <iostream>

bool Search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
     
    }
    return false;  
}

int main()
{

    int arr[10] = {8, 4, 9, -5, 26, -16, 26, 62, -57, 1};
    std::cout << "Please enter the key to find: " << std::endl;
    int key;
    std::cin >> key;

    bool isFound = Search(arr, 10, key);

    if (isFound)
    {
        std::cout << "Element found in the array!" << std::endl;
    }
    else
    {
        std::cout << "Element not found in the array!" << std::endl;
    }

    return 0;
}