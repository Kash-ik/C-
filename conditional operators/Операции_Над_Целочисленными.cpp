#include<iostream>
using namespace std;

int main(){
    setlocale (LC_ALL, "rus");
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    if (x < 0 && y < 0) {
        int z = x + y;
        cout << z << endl;
    }
    else {
        int z = x * y;
        cout << z << endl;
    }
}