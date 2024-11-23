#include <iostream>
using namespace std;

int main() {
    char gender, city;
    int age;
    float salary;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter city (K/H/S/G): ";
    cin >> city;

    cout << "Enter current salary: ";
    cin >> salary;

    if (gender == 'F' || gender == 'f') {
        if (age >= 25 && age <= 35) {
            if (city == 'K' || city == 'k' || city == 'H' || city == 'h') {
                salary += 2000;
                cout << "Net salary: " << salary << endl;
            } else {
                cout << "Present salary: " << salary << endl;
            }
        } else {
            cout << "Present salary: " << salary << endl;
        }
    } else if (gender == 'M' || gender == 'm') {
        if (age >= 25 && age <= 40) {
            if (city == 'S' || city == 's' || city == 'G' || city == 'g') {
                salary += 2500;
                cout << "Net salary: " << salary << endl;
            } else {
                cout << "Present salary: " << salary << endl;
            }
        } else {
            cout << "Present salary: " << salary << endl;
        }
    } else {
        cout << "Invalid gender entered!" << endl;
    }

    return 0;
}
