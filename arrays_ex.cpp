#include <iostream>

using namespace std;

int main(){
    string cars[] = {"Volvo", "Benz", "Maruti", "Tata", "Toyota"};

    string name = "Vikas";

    cout << cars[0] << endl;
    cout << sizeof(name) << endl;

    cars[0] = "Mahindra";

    cout << cars[0] << endl;

    for (string strs: cars){
        cout << strs << endl;
    }

    cout << sizeof(cars) << endl;
    int lenOfCars = sizeof(cars) / sizeof(string);
    cout << lenOfCars << endl;
}