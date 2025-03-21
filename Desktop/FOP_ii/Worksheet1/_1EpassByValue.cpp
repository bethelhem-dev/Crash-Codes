#include <iostream>
#include <cmath>
using namespace std;

// Function to swap the first and last digits by value with void return type
void swapFirstAndLastDigitsByValueVoid(int num) {
    int temp = num;

    // Extract the last digit
    int lastDigit = num % 10;

    // Loop to get the first digit
    int digits = 0;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    int firstDigit = temp;

    // If it's a single-digit number, no swap needed
    if (digits == 0) return;

    // Remove the first and last digits from the number
    int middlePart = num % (int)pow(10, digits);  // Remove first digit
    middlePart /= 10;  // Remove last digit

    // Reconstruct the number with swapped first and last digits
    num = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    // Print the swapped number (it won't affect the original variable)
    cout << "Swapped Number (Pass-by-Value with void): " << num << endl;
}

// Function to swap the first and last digits by value with int return type
int swapFirstAndLastDigitsByValueInt(int num) {
    int temp = num;

    // Extract the last digit
    int lastDigit = num % 10;

    // Loop to get the first digit
    int digits = 0;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    int firstDigit = temp;

    // If it's a single-digit number, no swap needed
    if (digits == 0) return num;

    // Remove the first and last digits from the number
    int middlePart = num % (int)pow(10, digits);  // Remove first digit
    middlePart /= 10;  // Remove last digit

    // Reconstruct the number with swapped first and last digits
    num = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    return num;  // Return the modified number
}

int main() {
    int num;

    // Get user input
    cout << "Enter a number: ";
    cin >> num;

    // Call pass-by-value function with void return type
    swapFirstAndLastDigitsByValueVoid(num);
    cout << "Original Number after Pass-by-Value with void: " << num << endl; // Original num stays the same

    // Get new input for the second test
    cout << "Enter another number: ";
    cin >> num;

    // Call pass-by-value function with int return type
    int swappedNum = swapFirstAndLastDigitsByValueInt(num);
    cout << "Swapped Number (Pass-by-Value with int): " << swappedNum << endl;

    return 0;
}
