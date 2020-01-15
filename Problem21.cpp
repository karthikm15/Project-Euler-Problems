#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    int count1, count2, count3;
    count3 = 0;
    for (int i = 1; i < 10001; i++) {
        count1 = 0;
        count2 = 0;
        //cout << i << " ";
        for (int j = 1; j < (i/2)+1; j++) {
            if (fmod(i, j) == 0) {
                count1 += j;
                //cout << j << " ";
            }
        }
        //cout << count1 << " ";
        for (int j = 1; j < (count1/2)+1; j++) {
            if (fmod(count1, j) == 0) {
                count2 += j;
            }
        }
        //cout << count2 << endl;
        if ((count2 == i) && (count1 != count2)){
            count3 += count1;
            cout << i << " " << count1 << " " << count2 << endl;
            count3 += count2;
        }
    }

    cout << count3/2;
}