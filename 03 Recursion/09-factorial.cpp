#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Negative numbers are not allowed.";
    } else if (n > 20) {
        cout << "Please enter a number up to 20.";
    } else {
        cout << "Factorial = " << factorial(n);
    }

    return 0;
}