#include<iostream>
using namespace std;

int binarySearch(int arr[], int key, int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid =  (end + start) / 2;

        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] < key){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}


int main(){
    
    int odd[5] = {1,6,8,10,27};
    int even[6] = {10,20,32,38,40,42};
    std::cout<<binarySearch(odd, 27, 5)<<std::endl;
    std::cout<<binarySearch(even, 20, 6)<<std::endl;

}
