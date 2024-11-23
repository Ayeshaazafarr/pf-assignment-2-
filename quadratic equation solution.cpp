#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, x1, x2;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    float discriminant = b * b - 4 * a * c;
    x1 = (-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant)) / (2 * a);

    cout << "Root 1: " << x1 << endl;
    cout << "Root 2: " << x2 << endl;

    return 0;
}
