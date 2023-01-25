#include <iostream>

using namespace std;

struct{
        int rollNo;
        string name;
    } myStruct;

struct{
        int myNum;
    } myStructure1, myStructure2, myStructure3;

struct myDataStructure{
        string name;
    };

int main(){
    

    myStruct.rollNo = 10;
    myStruct.name = "Vikas";

    cout << myStruct.rollNo << endl;
    cout << myStruct.name << endl;

    myStructure1.myNum = 1;
    myStructure2.myNum = 2;
    myStructure3.myNum = 3;

    cout << myStructure1.myNum << endl;
    cout << myStructure2.myNum << endl;
    cout << myStructure3.myNum << endl;

    myDataStructure myDataStruct;
    myDataStruct.name = "Vikas";

    cout<< myDataStruct.name << endl;
}