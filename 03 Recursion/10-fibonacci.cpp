#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Enter number of terms (1 to 20): ";
    cin >> n;

    if (n < 1 || n > 20) {
        cout << "Invalid input.";
    } else {
        for (int i = 0; i < n; i++) {
            cout << fibonacci(i) << " ";
        }
    }

    return 0;
}