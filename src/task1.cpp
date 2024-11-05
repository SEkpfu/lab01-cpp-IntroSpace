#include <iostream>
#include <math.h>
using namespace std;

double square(double num) {
    return num * num;
}

double rast(double x, double y, double next_x, double next_y) {
    return sqrt(square(next_x - x) + square(next_y - y));
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << rast(x1, y1, x2, y2) + rast(x2, y2, x3, y3) + rast(x1, y1, x3, y3) << endl;
    
    return 0;
}
