#include <iostream>
using namespace std;

int main() {
    string userID, password;
    
    cout << "Enter your ID: ";
    cin >> userID;

    switch (userID == "user123") {  // assume if valid ID is 'user123'
        case true:
            cout << "Enter your password: ";
            cin >> password;
            switch (password == "password123") {  // assume if  correct password is 'password123'
                case true:
                    cout << "Welcome, user123!" << endl;
                    break;
                case false:
                    cout << "Incorrect Password" << endl;
                    break;
            }
            break;
        case false:
            cout << "Incorrect ID" << endl;
            break;
    }

    return 0;
}
