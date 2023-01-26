#include <iostream>

using namespace std;

int funcPlus(int a, int b){
    return a + b;
}

double funcPlus(double a, double b){
    return a + b;
}

int main(){
    int x;
    double y;

    x = funcPlus(10, 20);
    cout << x << endl;

    y = funcPlus(10.21, 32.34);
    cout << y << endl;
}
