#include <iostream>

void findUnique(int arr[], int n)
{
    int number;
    for (int i = 0; i < n; i++)
    {

        for (int i2 = 0; i2 < n; i2++)
        {
            if (arr[i] == arr[i2])
            {
                break;
            }
            else
            {
                number = arr[i];
            }
            i2++;
        };
        i++;
    }
    std::cout << "The Unique Num is: " << number << std::endl;
};

int main()
{

    int arr[7] = {1, 1, 2, 2, 9, 3, 3};

    findUnique(arr, 7);

    return 0;
}