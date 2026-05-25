#include <iostream>
using namespace std; 
int main() {
    setlocale(LC_ALL, "Russian");
    int N, sum = 0, i = 1;
    cout << "Введите N: ";
    cin >> N;
//Метка начала цикла
    start:
        sum += i;      // добавляем текущее i к сумме
        i++;           // увеличиваем счётчик
        if (i <= N)    // проверяем условие продолжения
            goto start; // переход на метку start  
    cout << "Сумма чисел от 1 до " << N << " = " << sum << endl;   
    return 0;
}