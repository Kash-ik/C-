#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale (LC_ALL, "RUS");
    float x, y, R;
    cout << "x = "; //ввод координат
    cin >> x;
    cout << "y = ";
    cin >> y;   
    cout << "R="; //ввод радиуса
    cin >> R;

    float z = x * x + y * y //уравнение окружности
    if (z < R * R) // внутри
        cout << "Внутри\n";
    else if (z > R * R) // вне
        cout << "Снаружи\n";
    else //на границе
        cout << "На границе\n";
    system("pause");
    return 0;
}