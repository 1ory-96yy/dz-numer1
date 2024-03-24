#include <iostream>
#include "oop.h"

using namespace std;

int main() {
    Fraction fraction1, fraction2, result;

    cout << "Enter data for first fraction:\n";
    fraction1.inputFraction();

    cout << "Enter data for second fraction:\n";
    fraction2.inputFraction();

    cout << "First fraction is: ";
    fraction1.displayFraction();
    cout << endl;

    cout << "Second fraction is: ";
    fraction2.displayFraction();
    cout << endl;

    result = fraction1.add(fraction2);
    cout << "Sum of fractions: ";
    result.displayFraction();
    cout << endl;

    result = fraction1.subtract(fraction2);
    cout << "Difference of fractions: ";
    result.displayFraction();
    cout << endl;

    result = fraction1.multiply(fraction2);
    cout << "Product of fractions: ";
    result.displayFraction();
    cout << endl;

    result = fraction1.divide(fraction2);
    cout << "Division of fractions: ";
    result.displayFraction();
    cout << endl;

    return 0;
}
