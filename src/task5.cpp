#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n, count=0;
    double x, y;

    cin >> n;
    for (int i=0; i < n; i++) {
        cin >> x >> y;
        if (x * x + y * y <= 16) {
            if (x <= -2 || (x <= 0 && y <= 0)) {
                count++;
            } else if (x >= 0 && y <= 0 && y >= x - 4) {
                count++;
            }
        }
    }
    cout << count << endl;
    
    return 0;
}
