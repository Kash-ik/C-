#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    int n, i;
    cout << "Введите значения n и i\n";
    cin >> n >> i;
    cout << (n | (1 << i)) << endl;
}