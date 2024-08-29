#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;

    cout << "Enter the number for factorial series: ";
    cin >> n;

    cout << "Factorial series up to " << n << ":\n";
    for (int i = 1; i <= n; i++) {
        cout << i << "! = " << factorial(i) << endl;
    }

    return 0;
}
