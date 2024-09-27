#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Using bitwise operators
    while (b != 0) {
        int carry = a & b;  // Calculate carry bits
        a = a ^ b;          // Add without carrying
        b = carry << 1;    // Shift carry bits left
    }

    cout << "Sum: " << a << endl;

    return 0;
}
