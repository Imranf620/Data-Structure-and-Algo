#include <iostream>

// void findUnique(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;

//         for (int i2 = 0; i2 < n; i2++)
//         {
//             if (arr[i] == arr[i2])
//             {
//                 count++;
//             }
//         };
//         if (count == 1)
//         {

//             std::cout << "The Unique Num is: " << arr[i] << std::endl;
//         }
//     }
// };
//

void findUnique(int arr[], int n)
{

    int ans  =0;
    for (int i = 0; i < n; i++)
    {
      
        ans = ans ^ arr[i];
    }
    std::cout<<"the unique is: "<<ans<<std::endl;
};
int main()
{

    int arr[7] = {1, 1, 2, 2, 9, 3, 3};

    findUnique(arr, 7);

    return 0;
}