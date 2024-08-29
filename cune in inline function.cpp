#include <iostream>
using namespace std;

// Inline function to calculate the cube of a number
inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Calculate the cube using the inline function
    int result = cube(num);

    // Display the result
    cout <<result;

    return 0;
}

