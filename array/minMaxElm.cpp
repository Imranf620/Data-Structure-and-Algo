
#include <iostream>
#include <climits>

int maxNum(int arr[], int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        };
    }
    return max;
};

int minNum(int arr[], int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    //     int size;
    //     std::cout<<"Please enter the size: "<<std::endl;
    //     std::cin>>size;
    //   int arr[1000];

    //   for(int i=0; i<size;i++){
    //       std::cin>>arr[i];
    //   }
    //   std::cout<<"Min Number is: " <<minNum(arr, size)<<std::endl;
    //   std::cout<<"Max Number is: " <<maxNum(arr, size)<<std::endl;

    std::cout << "Max between 2, 3 is:  " << std::max(2, 3) << std::endl;

    return 0;
}