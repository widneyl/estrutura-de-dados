#include <iostream>
using namespace std;

void coefB(int n, int p)
{
    if (n == 1)
    {
        return;
    }
    else
    {
        int fat =0;
        for (int i = n-1; n >= 1; i--){
            for (int j = n; n > 1; j--){
                fat = j*i;
            }
        }
    }
}

int fat(int n){
    if (n == 1){
        return 1;
    }
    else{
        
        return n * fat(n-1);

    }
}

int main()
{
   int re = fat(5);
   cout << re << endl;
    
}