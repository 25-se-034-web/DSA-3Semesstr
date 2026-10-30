#include <iostream>
using namespace std;

int main() {

    int arr[5] = {5, 3, 8, 4, 2};
    int n = 5;
    int choice;
    cout << "1. Bubble Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        cout << "Bubble Sorted Array: ";
    }
    else if (choice == 2) {
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
        cout << "\nSelection Sorted Array: ";
    }
    else {
        cout << "Invalid Choice!";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
