#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main() {
    vector<int> abundant;
    int count = 0;
    for (int i = 0; i < 28123; i++) {
        count = 0;
        for (int j = 0; j < i; j++) {
            if (fmod(i, j) == 0) {
                count += j;
            }
        }

        if (count > i) {
            abundant.push_back(i);
        }
    }

    int size = abundant.size();
    int arr[size];
    int count2 = 0;
    for (vector<int>::iterator it = abundant.begin(); it != abundant.end(); ++it) {
        arr[count2] = *it;
        count2++;
    }

    int sum = 0;
    for (int i = 1; i < 28124; i++) {
        cout << i;
        bool isWorking = false;
        for (int j = 1; j <= size+1; j++) {
            for (int k = 1; k <= j; k++) {
                if (arr[j-1]+arr[k-1] == i) {
                    isWorking = true;
                    break;
                }
            }
            if (isWorking) {
                break;
            }
        }

        if (!isWorking) {
            sum += i;
            cout << i << endl;
        }
    }

    cout << sum; 
}