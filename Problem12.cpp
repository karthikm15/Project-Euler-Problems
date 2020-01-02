#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
    int n = 0;
    int i = 1;
    long int sum = 0;

    while (n < 501) {
        n = 0;

        for (long int i = 0; i < sqrt(sum); i++) {
            if (fmod(sum, i) == 0) {
                n++;
                n++;
            }
        }
        cout << sum << " " << n << " " << i << endl;
        sum += i;
        i++;
    }

    cout << sum;
}