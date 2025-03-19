/*
Updated Problem:
The structure Person will contain the following:
Age
Scores (1D array)
Matrix (2D array)
Height
Address (nested structure)
The Address structure will contain:
Street
City
Postal Code
We will also calculate the sum of the marks and matrix elements.
*/
#include <iostream>
#include <string>

using namespace std;

// Nested structure for Address
struct Address {
    string street;
    string city;
    string postalCode;
};

// Main structure for Person
struct Person {
    int age;
    int scores[3];  // 1D array of size 3
    int matrix[2][2];  // 2D array of size 2x2
    string name;
    float height;
    Address address;  // Nested structure for Address
};

int main() {
    // Create a variable of type Person
    Person p;

    // Accept user input for the structure attributes
    cout << "Enter your name: ";
    getline(cin, p.name);

    cout << "Enter your age: ";
    cin >> p.age;

    cout << "Enter your height (in feet): ";
    cin >> p.height;

    // Accept marks (scores) for the 1D array
    cout << "Enter 3 marks: ";
    for (int i = 0; i < 3; i++) {
        cin >> p.scores[i];
    }

    // Accept values for the 2D array (matrix)
    cout << "Enter values for a 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> p.matrix[i][j];
        }
    }

    // Accept address information using the nested Address structure
    cin.ignore();  // to clear the buffer before taking address input
    cout << "Enter your street: ";
    getline(cin, p.address.street);

    cout << "Enter your city: ";
    getline(cin, p.address.city);

    cout << "Enter your postal code: ";
    getline(cin, p.address.postalCode);

    // Calculate the sum of the matrix elements
    int total = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            total += p.matrix[i][j];
        }
    }

    // Calculate the sum of the marks
    int sumOfMarks = 0;
    for (int i = 0; i < 3; i++) {
        sumOfMarks += p.scores[i];
    }

    // Output the values of the structure
    cout << "\n--- User Details ---\n";
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Height: " << p.height << " feet" << endl;

    cout << "Marks: ";
    for (int i = 0; i < 3; i++) {
        cout << p.scores[i] << " ";
    }
    cout << endl;

    cout << "Matrix: \n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << p.matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Address: " << endl;
    cout << "Street: " << p.address.street << endl;
    cout << "City: " << p.address.city << endl;
    cout << "Postal Code: " << p.address.postalCode << endl;

    // Display the sum of marks
    cout << "Sum of marks: " << sumOfMarks << endl;

    // Check if the sum of marks is even or odd
    if (sumOfMarks % 2 == 0) {
        sumOfMarks += 10;  // If even, add 10 to the sum
        cout << "The sum of marks is even, so we add 10: " << sumOfMarks << endl;
    } else {
        cout << "The sum of marks is odd, so we keep it as: " << sumOfMarks << endl;
    }

    // Display the total sum of the matrix
    cout << "Total sum of the matrix: " << total << endl;

    return 0;
}
