#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char c;
    float f;
    double d;
    cin >> i >> l >> c >> f >> d;
    cout << i << "\n";
    cout << l << "\n";
    cout << c << "\n";
    cout << fixed << setprecision(3) << f << "\n";
    cout << fixed << setprecision(9) << d << "\n";
    return 0;
}