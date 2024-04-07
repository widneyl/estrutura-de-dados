#include <iostream>
#include <iomanip>

using namespace std;

        //20 - 20 = 0
//valor na 3 igreja = 10*2 = 20
        //valor atual = 10
        //30 - 20 = valor atual
        //valor atual = 30/2

        //valor atual + 20
        //valor atual /2


//valor na 2 igreja = 15*2 = 30 
        //valor atual = 15
        //35 - 20 = valor atual
        //valor atual = 15/2
//valor na 1 igreja = 15/2 -> caso base!


//valor da igreja doação/2

double doa = 0;

double santoDPO(int i, int d) {
    if (i == 1) {
        return d/2.00;
    } 
    else{
        // (20/2 + 20) /2 = 30
        // 30/2 + 20 /2 = 17.5
        
        double y = (d/2.00) + doa;
        
        
        return santoDPO(i-1, y);
    }
}

int main() {
    int i;
    int d;
    cin >> i;
    cin >> d;
    double *j = &doa;
    *j = d;

    double x = santoDPO(i, d);
    cout << x << setprecision(2) << endl;
}
