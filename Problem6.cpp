#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int sum = 0;
    for (int i = 1; i < 101; i++) {
        sum += i;
    }
    int sum2 = 0;

    for (int i = 1; i < 101; i++){
        sum2 += i*i;
    }

    cout << (int) (sum*sum)- sum2 << endl;
}