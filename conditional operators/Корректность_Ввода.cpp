#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale (LC_ALL, "RUS");
    int d, m, y;
    cout << "Введите дату\n";
    cin >> d >> m >> y;

    switch (m){
        case 1 : case 3 : case 5 : case 7 :
        case 8 : case 10 : case 12 : //31 день
            if (d <= 0 || d > 31)
                cout << "Неправильно введен день\n";

            else
                cout << "Дата корректна\n"; break;
        case 4 : case 6 : case 9 : case 11 : //30 дней
            if (d <= 0 || d > 30)
                cout << "Неправильно введен день\n";
            else
                cout << "Дата корректна\n"; break;
        case 2 :
            if (y % 400 == 0 || (y % 4 == 0 || y % 100 != 0)) { //високосный год
                if (d <= 0 || d > 29)
                    cout << "Неправильно введен день\n";
                else
                    cout << "Дата корректна\n"; break;
            }
            else { //невисокосный
                if (d <= 0 || d > 28)
                    cout << "Неправильно введен день\n";
                else
                    cout << "Дата корректна\n"; break;
            }
        default : cout << "Введен неправильный месяц\n";
    }
    system("pause");
    return 0;
}