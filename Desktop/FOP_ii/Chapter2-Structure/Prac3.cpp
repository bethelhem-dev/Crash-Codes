/*
3.[structure with function]
 Declare a structure to represent a complex number (a number having a real part and imaginary part). Write C++ functions to add, subtract,multiply and divide two complex numbers.
*/
#include <iostream>
#include <sstream>
using namespace std;

// Structure to represent a complex number
struct Complex {
    double real;
    double imag;
};

// Function to add two complex numbers
Complex add(Complex a, Complex b) {
    return {a.real + b.real, a.imag + b.imag};
}

// Function to subtract two complex numbers
Complex subtract(Complex a, Complex b) {
    return {a.real - b.real, a.imag - b.imag};
}

// Function to multiply two complex numbers
Complex multiply(Complex a, Complex b) {
    return {a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real};
}

// Function to divide two complex numbers
Complex divide(Complex a, Complex b) {
    double denominator = b.real * b.real + b.imag * b.imag;
    if (denominator == 0) {
        cout << "Error: Division by zero!" << endl;
        return {0, 0};
    }
    return {(a.real * b.real + a.imag * b.imag) / denominator, (a.imag * b.real - a.real * b.imag) / denominator};
}

// Function to display a complex number
void display(Complex c) {
    cout << c.real;
    if (c.imag >= 0) cout << " + " << c.imag << "i";
    else cout << " - " << -c.imag << "i";
    cout << endl;
}

// Function to correctly parse complex numbers including 'i'
Complex parseComplex(string input) {
    Complex num;
    stringstream ss(input);
    ss >> num.real >> num.imag;
    return num;
}

int main() {
    string input1, input2;
    Complex num1, num2;
    
    // User input
    cout << "Enter first complex number (real and imaginary part, e.g., 2 -5i): ";
    getline(cin, input1);
    cout << "Enter second complex number (real and imaginary part, e.g., 3 4i): ";
    getline(cin, input2);
    
    num1 = parseComplex(input1);
    num2 = parseComplex(input2);
    
    // Performing operations
    cout << "Addition: ";
    display(add(num1, num2));
    cout << "Subtraction: ";
    display(subtract(num1, num2));
    cout << "Multiplication: ";
    display(multiply(num1, num2));
    cout << "Division: ";
    display(divide(num1, num2));
    
    return 0;
}