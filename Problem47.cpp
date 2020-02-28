#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int count = 134043;
    while (true) {
        if (count == 134043){
            cout << 134043;
            break;
        }
        cout << count << endl;
        int sum = 0;
        vector<int> factors1;
        vector<int> factors2;
        vector<int> factors3;

        int count1 = count+1;
        int count2 = count+2;
        int i = 2;
        while (count > 1) {
            if (count % i == 0) {
                factors1.push_back(abs(i));
                count /= i;

            }
            i++;
        }
        int i2 = 2;
        while (count1 > 1) {
            while (count1 % i2 == 0) {
                factors2.push_back(abs(i));
                count1 /= i2;

            }
        }
        cout << endl;
        int i3 = 2;
        while (count2 > 1) {
            if (count2 % i3 == 0) {
                factors3.push_back(i);
                count2 /= i3;

            }
        }
        cout << endl;
        for (vector<int>:: iterator it = factors1.begin(); it != factors1.end(); it++) {
            if(find(factors2.begin(), factors2.end(), (*it)) == factors2.end()) {
                if (find(factors3.begin(), factors3.end(), (*it)) == factors3.end()) {
                    sum++;
                }
            }
        }

        if (sum == 4) {
            cout << count;
            break;
        }

        count++;
    }
}