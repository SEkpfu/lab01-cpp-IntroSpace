#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x, n;
    cin >> x;

    if (2 < x && x <= 5) {
        n = 5.5 + x * x * x;
    } else if (x > 5) {
        n = cos(M_PI / 2 + M_PI * x);
    } else {
        n = (2.0 / (x - 3)) + sqrt(abs(x + 1));
    }
    cout << n << endl;
    
    return 0;
}
