#include <iostream>
using namespace std;
int main() {
    int N = 20;
 
    for (int i = 2; i <= N; i++) {
        if (i % 5 == 0) {
            continue;  // пропускаем числа, кратные 5
        }
        cout << i << " ";
    }
 
    cout << endl;
    return 0;
}