#include <iostream>
using namespace std;

// Function to find the minimum element in an array
int findMin(int arr[], int size) {
    int min = arr[0];  // Assume the first element is the minimum

    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];  // Update min if a smaller element is found
        }
    }

    return min;
}

// Function to find the maximum element in an array
int findMax(int arr[], int size) {
    int max = arr[0];  // Assume the first element is the maximum

    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if a larger element is found
        }
    }

    return max;
}

int main() {
    int arr[] = {5, 8, 1, 4, 10, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = findMin(arr, size);
    int max = findMax(arr, size);

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    return 0;
}

