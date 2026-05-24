#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "Введите N: ";
    cin >> N;
    cout << "\nТаблица умножения " << N << "x" << N << ":" << endl;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << i * j << "\t";  // \t - табуляция для ровных столбцов
        }
        cout << endl;
    }   
    return 0;
}