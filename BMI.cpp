
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double weight = 0.0;
    double height = 0.0;

    cout << "Enter weight in pounds: ";
    cin >> weight;

    cout << "Enter height in inches: ";
    cin >> height;

    if (weight <= 0.0 || height <= 0.0) {
        cout << "Error: Weight and height must be positive numbers greater than zero." << endl;
        return 1;
    }
    double bmi = weight * 703.0 / (height * height);
    cout << fixed << setprecision(2);
    cout << "BMI: " << bmi << " - ";

    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi <= 25.0) {
        cout << "Optimal weight" << endl;
    } else {
        cout << "Overweight" << endl;
    }

    return 0;
}
