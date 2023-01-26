#include <iostream>

using namespace std;

int sum(int k){
    if (k == 0){
        return 0;
    } 
    else{
        return k + sum(k - 1);
    }
}

int main(){
    int k = 10;
    int total;
    total = sum(k);
    cout << total << endl;
}