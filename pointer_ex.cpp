#include <iostream>

using namespace std;

int main(){
    string name = "Vikas";
    string* ptrName = &name;

    cout << name << endl;
    cout << &name << endl;
    cout << ptrName << endl;
    cout << *ptrName << endl;   // dereference

    *ptrName = "Bikas";

    cout << *ptrName << endl;
}