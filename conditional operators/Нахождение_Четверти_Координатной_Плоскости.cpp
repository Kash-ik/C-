#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale (LC_ALL, "RUS");
    int x, y;
    cout << "x = "; //ввод 2 чисел
    cin >> x;
    cout << "y = ";
    cin >> y;
    if (x*y < 0) // внешний оператор if
        if ( x < 0) cout << "2 четверть\n"; //внутренний 1
        else cout << "4 четверть\n"; //внутренний 1 else
    else //внешний оператор else
        if (x < 0) cout << "3 четверть\n"; //внутренний 2
        else cout << "1 четверть\n"; //внутренний 2 else
    system("pause");
    return 0;
}