#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "Введите N: ";
    cin >> N;
    int S, i;
    
    for (i = 1, S = 0; i <= N && S < 1000; S += i, i++);
    cout << "Сумма = " << S << endl;
    cout << "Просуммировано чисел: " << i - 1 << endl;   
    return 0;
}