#include <iostream>
using namespace std;

void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        cout << number << " is Even";
    } else {
        cout << number << " is Odd";
    }
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    checkEvenOdd(number);

    return 0;
}