#include <iostream>
using namespace std;

int main() {
    int choice, subChoice;

    cout << "1. Start Game\n2. Settings\n3. Exit\nEnter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Game started! Enjoy!\n";
            break;
        case 2:
            cout << "1. Audio Settings\n2. Display Settings\n3. Back\nEnter choice: ";
            cin >> subChoice;
            switch(subChoice) {
                case 1:
                    cout << "1. Mute\n2. Unmute\nEnter choice: ";
                    cin >> subChoice;
                    cout << (subChoice == 1 ? "Audio muted." : "Audio unmuted.") << endl;
                    break;
                case 2:
                    cout << "1. Change Resolution\n2. Toggle Fullscreen\nEnter choice: ";
                    cin >> subChoice;
                    cout << (subChoice == 1 ? "Resolution changed." : "Fullscreen toggled.") << endl;
                    break;
                default:
                    cout << "Back to Main Menu.\n";
            }
            break;
        case 3:
            cout << "Exiting game. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}
