#include <iostream>
int main() {
    int S = 0, N = 10, i = 1;
    
    do {
        S += i ;
        i++;
    } while (i <= N);
    std::cout << "Ответ: " << S << std::endl;
    return 0;
}