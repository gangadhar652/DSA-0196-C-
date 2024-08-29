#include <iostream>
using namespace std;

int main() {
    int n, pos, elem;

    // Step 1: Input the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n + 1];  // Step 2: Create an array of size n+1 to hold the new element

    // Step 3: Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Step 4: Input the element to be inserted
    cout << "Enter the element to be inserted: ";
    cin >> elem;

    // Step 5: Input the position where the element should be inserted
    cout << "Enter the position at which the element should be inserted (1 to " << n + 1 << "): ";
    cin >> pos;

    // Step 6: Shift elements to the right from the specified position to make space for the new element
    for (int i = n; i >= pos; --i) {
        arr[i] = arr[i - 1];
    }

    // Step 7: Insert the new element at the specified position
    arr[pos - 1] = elem;

    // Step 8: Display the updated array
    cout << "Array after insertion: ";
    for (int i = 0; i <= n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

