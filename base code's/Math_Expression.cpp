//x и y известны, вычислить 𝐹 (𝑥, 𝑦)
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale (LC_ALL, "RUS");
    float x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    float c = 2.0 * sqrt(cos(x) / (y + 1)) / 3;
    cout << "Результат: " << c << endl;
    system("pause");
    return 0;
}