#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[5];
    cout << "Enter 5 sorted elements: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int pos = binarySearch(arr, 5, key);
    if (pos != -1)
        cout << "Element found at position " << pos + 1;
    else
        cout << "Element not found";
    return 0;
}
