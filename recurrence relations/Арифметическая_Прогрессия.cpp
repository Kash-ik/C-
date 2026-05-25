#include <iostream>
using namespace std;
int main(){
    setlocale (LC_ALL,"Russian"); // русская клавиатура
    int a, d, n;
    cout << "Введите первый член прогрессии\n";
    cout << "a1="; cin >> a; //первый член прогрессии
    cout << "Введите разность прогрессии\n";
    cout << "d="; cin >> d; //разность
    cout << "Введите количество членов прогрессии\n";
    cout << "n="; cin >> n; //количество членов прогрессии
    cout << "a1 = " << a <<endl; //вывод 1-ого члена прогрессии
    for (int i = 2; i <= n; i++){ //вычисление i-ого члена
        a += d;
        cout << "a" << i << "=" << a << endl; //вывод на экран
    }
    return 0;
}