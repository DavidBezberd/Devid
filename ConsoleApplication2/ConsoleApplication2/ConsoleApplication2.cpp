#include <iostream>

const int size = 10;

// Function to calculate the sum of odd elements in the array
int sumOfOddElements(const int array[size]) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] % 2 != 0) {
            sum += array[i];
        }
    }
    return sum;
}

int main() {
    int mas[size];

    // Fill the array
    std::cout << "Enter " << size << " integers for the array:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> mas[i];
    }

    // Call the function to calculate the sum of odd elements
    int sum = sumOfOddElements(mas);
    std::cout << "Sum of odd elements: " << sum << std::endl;

    // Find the indices of the maximum and minimum elements
    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (mas[i] > mas[maxIndex]) {
            maxIndex = i;
        }
        if (mas[i] < mas[minIndex]) {
            minIndex = i;
        }
    }

    // Product of elements between the maximum and minimum
    int product = 1;
    int start = std::min(maxIndex, minIndex) + 1;
    int end = std::max(maxIndex, minIndex);
    for (int i = start; i < end; ++i) {
        product *= mas[i];
    }
    std::cout << "Product of elements between max and min: " << product << std::endl;

    // Sort the array in descending order (using the bubble sort algorithm)
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (mas[j] < mas[j + 1]) {
                std::swap(mas[j], mas[j + 1]);
            }
        }
    }

    // Output the sorted array
    std::cout << "Sorted array in descending order:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << mas[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
