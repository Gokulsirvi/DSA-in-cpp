#include <iostream>
using namespace std;

// Binary Search function
int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Avoid overflow
        
        if (arr[mid] == target) {
            return mid;  // Found target
        } 
        else if (arr[mid] < target) {
            left = mid + 1;  // Search right half
        } 
        else {
            right = mid - 1; // Search left half
        }
    }
    
    return -1; // Not found
}

int main() {
    int arr[] = {11, 22, 33, 44, 55, 66, 77};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the element to search for: ";
    cin >> target;

    int result = binarySearch(arr, n, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << "." << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
