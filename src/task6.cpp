#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n;
    cin >> n;

    double s=0;
    for (int i=1; i <= n; i++) {
        s += 1.0 / sin(2 * i);
    }
    cout << s << endl;
    
    return 0;
}
