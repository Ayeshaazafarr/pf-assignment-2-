#include <iostream>
using namespace std;

int main() {
    int previousReading, currentReading, unitsConsumed;
    float totalBill, finalBill;


    cout << "Enter previous reading: ";
    cin >> previousReading;
    cout << "Enter current reading: ";
    cin >> currentReading;

   
    unitsConsumed = currentReading - previousReading;

   
    if (unitsConsumed <= 300) {
        totalBill = unitsConsumed * 4; 
        finalBill = totalBill - (totalBill * 0.03); // Apply 3% subsidy
    }
    else if (unitsConsumed >= 301 && unitsConsumed <= 400) {
        totalBill = unitsConsumed * 6; 
        finalBill = totalBill; // apply 4% subsidy
    }
    else {
        totalBill = unitsConsumed * 7; 
        finalBill = totalBill + (totalBill * 0.04); 
    }

    
    cout << "Total units consumed: " << unitsConsumed << endl;
    cout << "Total bill: Rs. " << totalBill << endl;
    cout << "Final bill after adjustments: Rs. " << finalBill << endl;

    return 0;
}
