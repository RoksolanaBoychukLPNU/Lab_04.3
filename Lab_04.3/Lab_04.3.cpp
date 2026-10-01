#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;          // дійсні параметри функції
    double x, xp, xk, dx;    // аргумент, початок, кінець інтервалу, крок
    double F;                // значення функції

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "-------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(12) << "F" << " |" << endl;
    cout << "-------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x + 5 < 0 && c == 0)
            F = 1 / (a * x) - b;
        else
            if (x + 5 > 0 && c != 0)
                F = (x - a) / x;
            else
                F = 10 * x / (c - 4);

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(12) << setprecision(4) << F
            << " |" << endl;
        x += dx;
    }
    cout << "-------------------------" << endl;

    return 0;
}
