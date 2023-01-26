#include <iostream>

using namespace std;

class MyClass{
    public:
        int a;
};

int main(){
    MyClass myObj1, myObj2;

    myObj1.a = 20;
    myObj2.a = 10;

    cout << myObj1.a << endl;
    cout << myObj2.a << endl;
}   