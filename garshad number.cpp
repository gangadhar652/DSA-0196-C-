#include <iostream>
using namespace std;

int main() {
    int num, originalNum, sumOfDigits = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Add up the digits
    while (num != 0) {
        sumOfDigits += num % 10; // Add the last digit to the sum
        num /= 10;               // Remove the last digit
    }

    // Check if the original number is divisible by the sum of its digits
    if (originalNum % sumOfDigits == 0) {
        cout << originalNum << " is a Harshad number." << endl;
    } else {
        cout << originalNum << " is not a Harshad number." << endl;
    }

    return 0;
}

