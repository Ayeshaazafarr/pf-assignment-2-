#include <iostream>
using namespace std;

int main() {
    //storing credit hours and grade points for 5 courses
    double credithours1, grade_points1;
    double credithours2, grade_points2;
    double credithours3, grade_points3;
    double credithours4, grade_points4;
    double credithours5, grade_points5;
    double totalweightedsum, totalcredithours, SGPA;

    cout << "Enter credit hours for course 1: ";
    cin >> credit_hours1;
    cout << "Enter grade point (GP) for course 1: ";
    cin >> grade_points1;

    cout << "Enter credit hours for course 2: ";
    cin >> credit_hours2;
    cout << "Enter grade point (GP) for course 2: ";
    cin >> grade_points2;

    cout << "Enter credit hours for course 3: ";
    cin >> credit_hours3;
    cout << "Enter grade point (GP) for course 3: ";
    cin >> grade_points3;

    cout << "Enter credit hours for course 4: ";
    cin >> credit_hours4;
    cout << "Enter grade point (GP) for course 4: ";
    cin >> grade_points4;

    cout << "Enter credit hours for course 5: ";
    cin >> credit_hours5;
    cout << "Enter grade point (GP) for course 5: ";
    cin >> grade_points5;

    // Calculate the total weighted sum (credit hours * grade points)
    total_weighted_sum = (credit_hours1 * grade_points1) + 
                         (credit_hours2 * grade_points2) + 
                         (credit_hours3 * grade_points3) + 
                         (credit_hours4 * grade_points4) + 
                         (credit_hours5 * grade_points5);

    // Calculate the total credit hours
    total_credit_hours = credit_hours1 + credit_hours2 + credit_hours3 + credit_hours4 + credit_hours5;

    // Calculate SGPA
    SGPA = total_weighted_sum / total_credit_hours;

    // Output the SGPA
    cout << "The SGPA for the semester is: " << SGPA << endl;

    return 0;
}

