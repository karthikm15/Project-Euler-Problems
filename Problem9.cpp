#include <iostream>
#include <cmath>
using namespace std;

int main(){
    for (int a = 0; a < 500; a++) {
        for (int b = 0; b < 1000-a; b++) {
            int c = sqrt((a*a)+(b*b));
            if (((a+b+c) == 1000) && ((a*a) + (b*b) == (c*c))){
                cout << a * b * c << endl;
            }
        }
    }
}