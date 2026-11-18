#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Integer sum: " << add(5, 10) << endl;
    cout << "Decimal sum: " << add(2.5, 3.5);

    return 0;
}