#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    double a, b;
    int choice;

    cout << "===== C++ CALCULATOR =====" << endl;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Choose operation: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice) {
        case 1:
            cout << "Result = " << add(a, b);
            break;

        case 2:
            cout << "Result = " << subtract(a, b);
            break;

        case 3:
            cout << "Result = " << multiply(a, b);
            break;

        case 4:
            if (b == 0)
                cout << "Cannot divide by zero.";
            else
                cout << "Result = " << divide(a, b);
            break;

        default:
            cout << "Invalid choice.";
    }

    return 0;
}