#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x, y;
    cin >> x;

    // решение с 4 умножениями и 6 сложениями (разницами)
    double x2, x4, x2_sum, x4_sum;
    x2 = x * x;
    x4 = x2 * x2;
    cout << (2 * x2 - x + 1) * (x4 + x2 + 1) + x2 + 4 << endl;

    // перепроверка, что формула верна
    cout << 2 * pow(x, 6) - pow(x, 5) + 3 * pow(x, 4) - pow(x, 3) + 4 * pow(x, 2) - x + 5 << endl;
    
    return 0;
}
