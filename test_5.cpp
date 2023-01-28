#include <iostream>

using namespace std;

int main(){
	enum weekDays {mon=3, tue, wed=6, thur, fri=4, sat, sun};
	weekDays starts = sat;
	cout << starts << endl;
}
