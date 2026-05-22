#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    int n, i, number;
    cout << "Введите значения n и i\n";
    cin >> n >> i;
    cout << "Введите номер задания\n"; 
    cin >> number;
    
    if (number == 1) {
        cout << (1 << i) << endl;
    }