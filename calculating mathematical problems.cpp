#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice, number;

    cout << "Enter a number (1-3) to choose a function from the menu:\n";
    cout << "1. Calculate the square root\n";
    cout << "2. Calculate the cube\n";
    cout << "3. Print the number 50 times\n";
    cout << "4. Print the table of the number\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        cout << "Enter the number: ";
        cin >> number;
    }

    switch (choice) {
        case 1:
            cout << "Square root of " << number << " is: " << sqrt(number) << endl;
            break;
        case 2:
            cout << "Cube of " << number << " is: " << pow(number, 3) << endl;
            break;
        case 3:
            cout << "Printing the number 50 times: " << endl;
            for (int i = 0; i < 50; i++) {
                cout << number << " ";
            }
            cout << endl;
            break;
        case 4:
            cout << "Table of " << number << " is: " << endl;
            for (int i = 1; i <= 10; i++) {
                cout << number << " x " << i << " = " << number * i << endl;
            }
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
