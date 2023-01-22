#include <iostream>

using namespace std;

int main(){
    int myInt = 10;                 // 2 or 4 bytes
    float myFloat = 9.87;           // 4 bytes
    double myDouble = 10.11;        // 8 bytes
    char myChar = 'a';              // 1 byte
    string myString = "Hello";
    bool myBoolTrue = true;         // 1 byte   Outputs 1 (true)
    bool myBoolFalse = false;       // 1 byte   Outputs 0 (false) 

    cout << myInt << endl;
    cout << myFloat << endl;
    cout << myDouble << endl;
    cout << myChar << endl;
    cout << myString << endl;
    cout << myBoolTrue << endl;
    cout << myBoolFalse << endl;
}