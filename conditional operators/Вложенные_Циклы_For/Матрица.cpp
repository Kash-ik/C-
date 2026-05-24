#include <iostream>
#include <iomanip>  // для setw()
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "Введите размер матрицы: ";
    cin >> N;
    int matrix[10][10];  // статический массив (максимум 10x10)

//Заполнение матрицы
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = i * N + j + 1;
        }
    }
//Вывод матрицы
    cout << "\nМатрица " << N << "x" << N << ":" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }   
    return 0;
}