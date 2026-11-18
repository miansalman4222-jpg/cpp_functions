#include <iostream>
using namespace std;

void changeValue(int x) {
    x = 100;
    cout << "Inside function: " << x << endl;
}

int main() {
    int number = 10;

    cout << "Before function: " << number << endl;

    changeValue(number);

    cout << "After function: " << number << endl;

    return 0;
}