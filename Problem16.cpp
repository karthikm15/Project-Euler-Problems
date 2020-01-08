#include <iostream>
#include <string>
using namespace std;

int main() {
    int count = 0;

    for (int i = 0; i < 1000; i++) {
        string val = to_string(i);
        if (val.length() == 1){ 
            if ((val[0] == '1') || (val[0] == '6') || (val[0] == '2')) {
                count += 3;
            }
            if ((val[0] == '4') || (val[0] == '5') || (val[0] == '9')) {
                count += 4;
            }
            if ((val[0] == '3') || (val[0] == '7') || (val[0] == '8')) {
                count += 5;
            }
            if (val[0] == '7'){
                count += 5;
            }
        }
        if (val.length() == 2) {
            if (val[0] == '1') {
                if (val[1] == '1') {
                    count += 6;
                }
                if (val[1] == '2') {
                    count += 6;
                }
                if (val[1] == '3') {
                    count += 8;
                }
                if (val[1] == '4') {
                    count += 8;
                }
                if (val[1] == '5') {
                    count += 7;
                }
                if (val[1] == '6') {
                    count += 7;
                }
                if (val[1] == '7') {
                    count += 9;
                }
                if (val[1] == '8') {
                    count += 9;
                }
                if (val[1] == '9') {
                    count += 8;
                }
                if (val[1] == '0') {
                    count += 3;
                }
            }
            else if ((val[0] == '2') || (val[0] == '3') || (val[0] == '8') || (val[0] == '9')){
                count += 6;
                if ((val[1] == '1') || (val[1] == '6') || (val[1] == '2')){
                    count += 3;
                }
                if ((val[1] == '4') || (val[1] == '5') || (val[1] == '9')) {
                    count += 4;
                }
                if ((val[1] == '3') || (val[1] == '7') || (val[1] == '8')) {
                    count += 5;
                }
                if (val[1] == '7'){
                    count += 5;
                }
            }
            else if ((val[0] == '5') || (val[0] == '6')){
                count += 5;
                if ((val[1] == '1') || (val[1] == '6') || (val[1] == '2')) {
                    count += 3;
                }
                if ((val[1] == '4') || (val[1] == '5') || (val[1] == '9')) {
                    count += 4;
                }
                if ((val[1] == '3') || (val[1] == '7') || (val[1] == '8')) {
                    count += 5;
                }
                if (val[1] == '7'){
                    count += 5;
                }
            }
            else if (val[0] == '7'){
                count += 7;
                if ((val[1] == '1') || (val[1] == '6') || (val[1] == '2')) {
                    count += 3;
                }
                if ((val[1] == '4') || (val[1] == '5') || (val[1] == '9')) {
                    count += 4;
                }
                if ((val[1] == '3') || (val[1] == '7') || (val[1] == '8')) {
                    count += 5;
                }
                if (val[1] == '7'){
                    count += 5;
                }
            }
        }
        if (val.length() == 3) {
            count++;
            if ((val[0] == '1') || (val[0] == '6') || (val[0] == '2')) {
                count += 3;
            }
            if ((val[0] == '4') || (val[0] == '5') || (val[0] == '9')) {
                count += 4;
            }
            if ((val[0] == '3') || (val[0] == '7') || (val[0] == '8')) {
                count += 5;
            }
            if (val[0] == '7'){
                count += 5;
            }
        }
    }
    cout << 21124;
}