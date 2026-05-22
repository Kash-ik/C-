#include <iostream> //библиотека для потока ввода-вывода
#include <cmath> //библиотека математических функций
using namespace std;

int main(){
    setlocale (LC_ALL, "RUS"); //использование русской клавиатуры
    float x, y;
    cout << "Введите два катета\n";
    cin >> x >> y; //ввод двух катетов
    float c = sqrt(x * x + y * y); //теорема Пифагора
    cout << "Гипотенуза равна " << c << endl; //вывод
    system("pause"); //задержка консоли
    return 0;
}