#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Addition: " << a + b << "\n";
    cout << "Subtraction: " << a - b << "\n";
    cout << "Multiplication: " << a * b << "\n";
    
    if (b != 0) {
        cout << "Division: " << a / b << "\n";
        cout<< "Modulo: " << a % b << "\n";
    } else {
        cout << "Division and Modulo: Error (division by zero)\n";
    }

    return 0;
}

