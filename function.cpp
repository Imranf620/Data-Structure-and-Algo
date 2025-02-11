
#include <iostream>
int fact (int val){
    int ans = 1;
    while(val!=0){
        ans = val*ans;
        val-= 1;
    }
    return ans;
}
void answer(int n, int r){
    
    int nominator = fact(n);
    int denominator = fact(r)*fact(n-r);
    std::cout<<(nominator/denominator)<<std::endl;
}

int main() {
    int n = 5;
    int r = 2;
    answer(n,r);

    return 0;
}