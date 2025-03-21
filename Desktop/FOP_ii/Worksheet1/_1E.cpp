//Swaps the first and the last digits of a number
#include <iostream>
using namespace std;

int swapFirstLast(int num) {
    if (num < 10) return num; // Single digit case
    
    int lastDigit = num % 10;
    int firstDigit = num;
    int divisor = 1;
    
    // Extract first digit and determine divisor
    while (firstDigit >= 10) {
        divisor *= 10;
        firstDigit /= 10;
    }
    
    // Remove first and last digits
    int middlePart = (num % divisor) / 10;
    
    // Construct new number with swapped first and last digits
    int swappedNum = lastDigit * divisor + middlePart * 10 + firstDigit;
    
    return swappedNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number after swapping first and last digits: " << swapFirstLast(num) << endl;
    return 0;
}
