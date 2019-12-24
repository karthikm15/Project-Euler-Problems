#include <iostream>
using namespace std;

int main(){
	int place = 0;
	int place2 = 1;
    int placeholder;

	int sum = 0;

	while (place2 < 4000000) {
        placeholder = place2;
        place2 = place + place2;
        place = placeholder;
        if ((place + place2) % 2 == 0) {
            sum += place + place2;
        }
	}

	cout << sum;
}