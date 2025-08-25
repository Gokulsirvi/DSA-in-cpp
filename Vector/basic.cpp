#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector of integers
    vector<int> vec;

    // 1. push_back(value): Add element at the end
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // 2. size(): Returns the number of elements
    cout << "Size: " << vec.size() << endl;

    // 3. at(index): Access element at given index (with bounds checking)
    cout << "Element at index 1: " << vec.at(1) << endl;

    // 4. operator[]: Access element at index (no bounds checking)
    cout << "Element at index 2: " << vec[2] << endl;

    // 5. front(): Access the first element
    cout << "First element: " << vec.front() << endl;

    // 6. back(): Access the last element
    cout << "Last element: " << vec.back() << endl;

    // 7. empty(): Check if vector is empty
    cout << "Is vector empty? " << (vec.empty() ? "Yes" : "No") << endl;

    // 8. pop_back(): Remove last element
    vec.pop_back();
    cout << "After pop_back, size: " << vec.size() << endl;

    // 9. clear(): Remove all elements
    vec.clear();
    cout << "After clear, size: " << vec.size() << endl;

    // 10. insert(position, value): Insert element at position
    vec.push_back(100);
    vec.push_back(200);
    vec.insert(vec.begin() + 1, 150);  // Insert 150 at index 1

    cout << "After insert: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    // 11. erase(position): Remove element at position
    vec.erase(vec.begin());  // Remove first element

    cout << "After erase: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}
