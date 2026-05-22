#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale (LC_ALL, "RUS");
    int x, y;
    cout << "Введите трехзначное число\n";
    cin >> x;

//разбиваем на цифры
    int a, b, c;
    a = x % 10; //3 цифра
    x /= 10;
    b = x % 10; //2 цифра
    с = x / 10; //1 цифра

//сумма
    int sum = a + b + c;
    cout << "Введите однозначное число\n";
    cin >> y;

    (sum % y == 0) ? cout << "YES\n" : cout << "NO\n";
    system("pause");
    return 0;
}