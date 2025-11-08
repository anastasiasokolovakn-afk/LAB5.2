// Лабораторна робота № 5.2 (1)

#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std;

double S(const double x, const double eps, int& n, double R, double s);
double A(const double x, const int n, double a);

int main()
{
    double xp, xk, x, dx, eps, R = 0.0, s = 0;
    double M_PI = 3.141592653589793;
    int n = 0;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(10) << "arcctg(x)" << "   |"
        << setw(7) << "s" << "      |"
        << setw(5) << "n" << "   |"
        << endl;
    cout << "-------------------------------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        s = S(x, eps, n,R, s);

        cout << "|" << setw(7) << setprecision(2) << x << "   |"
            << setw(10) << setprecision(5) << M_PI / 2 - atan(x) << "   |"
            << setw(10) << setprecision(5) << s << "   |"
            << setw(5) << n << "   |"
            << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;

    return 0;
}

double S(const double x, const double eps, int& n, double R, double s)

{
    double M_PI = 3.141592653589793;
    n = 0;                // вираз залежить від умови завдання варіанту 
    double a = -x;         // вираз залежить від умови завдання варіанту 
    s = a;
    do {
        n++;
        a = A(x, n, a);
        s += a;
    } while (abs(a) >= eps);

    s += M_PI / 2;
    return s;
}

double A(const double x, const int n, double a)
{
    double R = -x * x * ((2.0 * n - 1.0) / (2.0 * n + 1.0));        // вираз залежить від умови завдання варіанту 
    a *= R;
    return a;
}