#include <iostream>

using namespace std;

void swapNumbers(int &firstNum, int &secondNum){
    int z = firstNum;
    firstNum = secondNum;
    secondNum = z;
}

void myFunc(int myArray[5]){
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << endl;
    }
}

int main(){
    int a = 10, b = 20;
    int myArray[5] = {1, 2, 3, 4, 5};
    cout << a << b << endl;
    swapNumbers(a, b);
    cout << a << b << endl;
    myFunc(myArray);
}

