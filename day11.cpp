#include <iostream>

int main() {
    int n;

    // Asking the user for the size of the array
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    // Declaring an array of size n
    int arr[n];

    // Input elements of the array
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Calculate the sum of all elements in the array
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the sum of the array elements
    std::cout << "The sum of all elements in the array is: " << sum << std::endl;

    return 0;
}
