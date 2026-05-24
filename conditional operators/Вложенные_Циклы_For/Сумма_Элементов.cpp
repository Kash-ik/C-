#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int N, sum = 0;
    cout << "Введите N: ";
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sum += j;  // или любые другие значения
        }
    }
    cout << "Сумма всех элементов: " << sum << endl;   
    return 0;
}