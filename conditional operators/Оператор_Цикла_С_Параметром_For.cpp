#include <iostream>
using namespace std;
 
int main() {
    int N, S = 0;    
    cout << "Введите N: ";
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        S += i;
    }
    
    cout << "Сумма чисел от 1 до " << N << " = " << S << endl;
    return 0;
}