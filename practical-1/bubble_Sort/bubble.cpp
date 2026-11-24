
#include <iostream>
using namespace std;

int main() {
    int i, j, n, temp;

    cout << "Enter the Value of n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!";
        return 0;
    }

    int* arr = new int[n];

    cout << "Enter the elements of the array: ";

    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";

    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    delete[] arr;

    return 0;
}
