#include <iostream>
using namespace std;

int main() {
	
    int creditHours1, creditHours2, creditHours3, creditHours4, creditHours5;
    double gradePoint1, gradePoint2, gradePoint3, gradePoint4, gradePoint5;

    
    cout << "Enter credit hours for course 1: ";
    cin >> creditHours1;
    cout << "Enter grade point (GP) for course 1: ";
    cin >> gradePoint1;

    cout << "Enter credit hours for course 2: ";
    cin >> creditHours2;
    cout << "Enter grade point (GP) for course 2: ";
    cin >> gradePoint2;

    cout << "Enter credit hours for course 3: ";
    cin >> creditHours3;
    cout << "Enter grade point (GP) for course 3: ";
    cin >> gradePoint3;

    cout << "Enter credit hours for course 4: ";
    cin >> creditHours4;
    cout << "Enter grade point (GP) for course 4: ";
    cin >> gradePoint4;

    cout << "Enter credit hours for course 5: ";
    cin >> creditHours5;
    cout << "Enter grade point (GP) for course 5: ";
    cin >> gradePoint5;

    // Calculate total weighted sum and total credit hours
    double weightedSum = (creditHours1 * gradePoint1) +
                         (creditHours2 * gradePoint2) +
                         (creditHours3 * gradePoint3) +
                         (creditHours4 * gradePoint4) +
                         (creditHours5 * gradePoint5);

    int totalCreditHours = creditHours1 + creditHours2 + creditHours3 + creditHours4 + creditHours5;

    double sgpa = weightedSum / totalCreditHours;

   
    cout << "Your SGPA for the semester is: " << sgpa << endl;

    return 0;
}
