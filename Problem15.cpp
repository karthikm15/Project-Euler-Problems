#include <iostream>
#include <stack>
using namespace std;
struct Tuple{
    int x, y;
};
int main() {
    /* 
    int count = 0;
    stack<Tuple> stackDFS;
    Tuple example = Tuple();
    example.x = 1;
    example.y = 1;
    stackDFS.push(example);

    while (!stackDFS.empty()) {
        Tuple last = stackDFS.top();
        stackDFS.pop();

        if ((last.x == 20) && (last.y == 20)) {
            count++;
        }
        else {
            if (last.x == 20) {
                Tuple downPoint = Tuple();
                downPoint.x = last.x;
                downPoint.y = last.y + 1;
                stackDFS.push(downPoint);
            }
            else if (last.y == 20) {
                Tuple rightPoint = Tuple();
                rightPoint.x = last.x + 1;
                rightPoint.y = last.y;
                stackDFS.push(rightPoint);
            }
            else {
                Tuple downPoint = Tuple();
                downPoint.x = last.x;
                downPoint.y = last.y + 1;
                stackDFS.push(downPoint);
                Tuple rightPoint = Tuple();
                rightPoint.x = last.x + 1;
                rightPoint.y = last.y;
                stackDFS.push(rightPoint);
            }
        }

        cout << count << "\n";
    }

    cout << count;
    */

   long long int arr[21][21];
   for (int i = 0; i < 21; i++) {
       for (int j = 0; j < 21; j++) {
           if ((i == 0) || (j == 0)) {
               arr[i][j] = 1;
           }
           else{
               arr[i][j] = 0;
           }
       }
   }
   for (int i = 1; i < 21; i++) {
       for (int j = 1; j < 21; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
            cout << i << " " << j << " " << arr[i][j] << endl;
       }
   }

   cout << arr[20][20];
}