#include <iostream>
using namespace std;

int multiply(int a, int b = 5) {
    return a * b;
}

int main() {
    cout << "Result 1: " << multiply(4) << endl;
    cout << "Result 2: " << multiply(4, 3);

    return 0;
}