#include <iostream>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "Russian");    
    int N;
    cout << "Введите N: ";
    cin >> N;
    cout << "\nВывод чисел:" << endl;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}