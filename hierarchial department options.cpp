#include <iostream>
using namespace std;

int main() {
    int department, role;

    cout << "Enter department number (1 for IT, 2 for Pharmacy): ";
    cin >> department;

    switch(department) {
        case 1: 
            cout << "You are in the IT Department.\n";
            cout << "Enter role number (1 for Developer, 2 for Support, 3 for Network Engineer): ";
            cin >> role;
            
            switch(role) {
                case 1: 
                    cout << "You are an IT Developer.\n";
                    break;
                case 2: 
                    cout << "You are an IT Support.\n";
                    break;
                case 3:
                    cout << "You are a Network Engineer.\n";
                    break;
                default:
                    cout << "Invalid role in IT.\n";
            }
            break;

        case 2: 
            cout << "You are in the Pharmacy Department.\n";
            cout << "Enter role number (1 for Pharmacist, 2 for Pharmacy Technician, 3 for Researcher): ";
            cin >> role;
            
            switch(role) {
                case 1: 
                    cout << "You are a Pharmacist.\n";
                    break;
                case 2: 
                    cout << "You are a Pharmacy Technician.\n";
                    break;
                case 3:
                    cout << "You are a Researcher in Pharmacy.\n";
                    break;
                default:
                    cout << "Invalid role in Pharmacy.\n";
            }
            break;

        default:
            cout << "Invalid department number.\n";
    }

    return 0;
}
