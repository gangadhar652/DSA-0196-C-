#include <iostream>
using namespace std;


int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;

    
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];


    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

   
    int total = sumArray(arr, size);
    cout << "The sum of the array elements is: " << total << endl;

    return 0;
}
