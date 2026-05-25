#include <iostream>
using namespace std; 
int main() {
    int N = 20;
    for (int i = 2; i <= N; i++) {
        int delitel = 0;
 
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                delitel = 1;
                break;  // хватило одного делителя
            }
        }
 
        if (delitel == 0) {
            cout << i << " ";
        }
    }
    return 0;
}