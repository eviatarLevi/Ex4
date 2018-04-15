#include <iostream>
using namespace std;

#include "CircularInt.hpp"



int main() {
	CircularInt hour {1, 12};                 // <hour is an integer between 1 and 12, like an hour on the clock>
	cout << hour << endl;                     // 1
	hour += 4;  cout << hour << endl;         // 5
	(hour += 2)++;  cout << hour << endl;     // 8
	hour += 18;   cout << hour << endl;       // 2   (18 hours after 8)
}
