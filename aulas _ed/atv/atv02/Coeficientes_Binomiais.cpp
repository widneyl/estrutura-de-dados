#include <iostream>
using namespace std;

int fat(int n){
    if (n == 1){
        return 1;
    }
    else{
        
        return n * fat(n-1);

    }
}

int coef(int n, int k){
    return fat(n) / (fat(k)) * (n - k);
}

int main()
{
   int re = coef(8, 4);
   cout << re << endl;
    
}