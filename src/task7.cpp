#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n, cur, copy, countA=0, sumB=0, mulC=1;
    cin >> n;

    for (int i=0; i < n; i++) {
        cin >> cur;

        // пункт а
        if (cur % 5 == 0) {
            countA++;
        }

        // пункт б
        copy = cur;
        while (copy / 10 > 0) {
            copy /= 10;
        }
        if (copy == 7) {
            sumB += cur;
        }

        // пункт в
        if (cur % 1000 == cur && cur % 100 != cur) {
            mulC *= cur;
        }
    }

    cout << "Результат пункта а) " << countA << endl;
    cout << "Результат пункта б) " << sumB << endl;
    if (mulC != 1) {
        cout << "Результат пункта в) " << mulC << endl;
    }
    
    return 0;
}
