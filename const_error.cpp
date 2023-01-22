#include <iostream>

using namespace std;

int main(){
    const int myInt = 5;
    myInt = 10;
    cout << myInt << endl;
}


// output 
// const_error.cpp: In function 'int main()':
// const_error.cpp:7:11: error: assignment of read-only variable 'myInt'
//     7 |     myInt = 10;
//       |     ~~~~~~^~~~
