#include <iostream>
using namespace std;

int main() {
    float a, b, c, x, y, d, A;
    cout << "Enter values for a, b, c, x, y, d: ";
    cin >> a >> b >> c >> x >> y >> d;

    A = (7 * 7 * b * (x * y + a) / c - 0.8 + 2 * b * d) / ((x + a) * (1 / y));
    cout << "Result: " << A << endl;

    return 0;
}
