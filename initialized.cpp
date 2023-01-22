#include <iostream>

using namespace std;

int main(){
    int a, b, c = 10;
    int x = 10, y = 10, z = 10;
    cout << "Uninitialized" << endl;
    cout << a << " " << b << " " << c << endl;
    cout << "Initialized" << endl;
    cout << x << " " << y << " " << z << endl;
}