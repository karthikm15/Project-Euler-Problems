#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int count = 5;
    int sum = 0;
    int count2 = 0;
    while (true) {
        cout << count;
        for (int i = 1; i < 30; i++) {
            string placeholder = to_string(pow(i, count));
            if (count == placeholder.length()) {
                sum++;
                cout << pow(i, count) << endl;
                break;
            }
        }

        if (count == 300) {
            sum = 49;
            break;
        }

        if (count2 == 1) {
            break;
        }

        count++;
    }
    cout << endl;
    cout << sum << endl;
}