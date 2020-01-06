#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    int iterations = 0;
    int max = 0;
    int maxnum = 0;
    long long int number = 0;
    for (int i = 2; i < 1000000; i++) {
        number = i;
        iterations = 0;
        while (number != 1) {
            if (fmod(number, 2) == 0) {
                number /= 2;
                iterations++;
            }
            else {
                number = number*3 + 1;
                iterations++;
            }
        }
        if (max < iterations) {
            max = iterations;
            maxnum = i;
        }
        cout << i << " " << iterations << endl;
    }
    cout << maxnum;
}