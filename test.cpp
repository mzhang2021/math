#include <complex>
#include <iomanip>
#include <iostream>
using namespace std;

// Confirming results from https://blogs.mathworks.com/cleve/2013/10/14/complex-step-differentiation/

// C++ long double precision - about 21 decimal digits of precision
// https://stackoverflow.com/a/14221894
// f(x) = e^x / ((cos x)^3 + (sin x)^3)
// There is a pow function built into standard library, but I believe it has more overhead and loses precision
long double fReal(long double x) {
    return exp(x) / (cos(x) * cos(x) * cos(x) + sin(x) * sin(x) * sin(x));
}

long double fComplex(complex<long double> x) {
    return (exp(x) / (cos(x) * cos(x) * cos(x) + sin(x) * sin(x) * sin(x))).imag();
}

int main() {
    cout << fixed << setprecision(20);

    // x = PI / 4
    // strangely no PI constant built into standard library
    long double x = atan(1);
    long double h = 0.1;
    for (int i=0; i<20; i++) {
        // using (f(x + h) - f(x - h)) / (2h) for real-valued approximation
        cout << h << " " << fComplex(complex<long double>(x, h)) / h << " " << (fReal(x + h) - fReal(x - h)) / (2 * h) << "\n";
        h /= 10;
    }

    return 0;
}
