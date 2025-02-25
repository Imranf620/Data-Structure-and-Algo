#include <iostream>
using namespace std;

// Define the function outside of main
int hammingWeight(int n) {
    int count = 0;
    while (n != 0) {
        if (n & 1) {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main() {
    int num = 11; 
    cout << "Hamming Weight: " << hammingWeight(num) << endl;
    return 0;
}
