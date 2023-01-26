#include <iostream>

using namespace std;

class MyClass{
    public:
        void myMethod();
};

void MyClass::myMethod(){                       // :: scope resolution operator
        cout << "Hello World! from my Class";
}

int main(){
        MyClass myObj;
        myObj.myMethod();
}