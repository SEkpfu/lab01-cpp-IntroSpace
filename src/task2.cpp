#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x, y, z;
    cin >> x >> y >> z;
    cout << ((x + y + z < 0) ? ((x <= y) ? x : y) : (x*x + y*y + z*z)) << endl;
    
    return 0;
}
