#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
bool isPrime(int n){
    for (int i = 2; i < (int)sqrt(n)+1; i++){
        if (fmod(n, i) == 0){
            return false;
        }
    }
    return true;
}
int main() {
    int count = 1;
    int i = 2;
    while (count <= 10001) {
        if (isPrime(i))
            count++;
            cout << i << endl;
        i++;
    }
    cout << i;
}