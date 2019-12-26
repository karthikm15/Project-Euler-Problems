#include <iostream>
using namespace std;

int main(){
    long long int product = 1;
    int count = 0;
    for (int i = 10; i < 21; i++) {
        product *= i;
    }
    cout << product;
    for (long long int i = 0; i < product; i++) {
        count = 0;
        for (int j = 0; j < 20; j++) {
            if (product % j == 0){
                count++;
            }
        }

        if (count == 20){
            cout << i;
            break;
        }
    }
}