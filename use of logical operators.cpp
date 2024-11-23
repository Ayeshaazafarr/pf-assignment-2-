#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;

    string result = (a > b) ? "a is greater than b" : "a is not greater than b";
    cout << result << endl;

    if (a > 0 && b > 0) {
        cout << "Both numbers are positive!" << endl;
    } else {
        cout << "One or both numbers are not positive!" << endl;
    }

    if (a > 0 || b > 0) {
        cout << "Only one number is positive!" << endl;
    } else {
        cout << "No number is positive!" << endl;
    }

    if (!(a == b)) {
        cout << "a is not equal to b!" << endl;
    } else {
        cout << "a is equal to b!" << endl;
    }

    return 0;
}
