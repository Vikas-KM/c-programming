#include <iostream>

using namespace std;

int main(){
    string name = "Vikas";
    string &alterName = name;

    cout << name << endl;
    cout << alterName << endl;
}