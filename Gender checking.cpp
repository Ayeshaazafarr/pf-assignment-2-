#include <iostream>
using namespace std;

int main() {

    char gender;

    cout << "Enter a letter (m for male, any other letter for female): ";
    cin >> gender;

   
    if (gender == 'm' || gender == 'M') {
        cout << "You are a male" << endl; 
    } else {
        cout << "You are a female" << endl; 
    }

    return 0;
}
