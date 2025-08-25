#include <iostream>
using namespace std;

// Function of linear search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // return index if found
        }
    }
    return -1; // not found
}

int main() {
    int arr[] = {10, 23, 45, 70, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the element to search for: ";
    cin >> target;

    int result = linearSearch(arr, n, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << "." << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
