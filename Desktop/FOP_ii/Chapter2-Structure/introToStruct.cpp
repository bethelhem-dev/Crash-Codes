/*
Create a structure that holds the following data:

An integer age
A 1D array of integers representing scores
A 2D array of integers representing matrix
A string representing the name
A floating-point number representing height
We will then create a single instance of this structure (not an array) and display the values.

*/
#include <iostream>
#include <string>

using namespace std;

// Define the structure
struct Person {
    int age;
    int scores[3];  // 1D array of size 3
    int matrix[2][2];  // 2D array of size 2x2
    string name;
    float height;
};

int main() {
    // Create a variable of type Person
    Person p;

    // Assign values to the attributes of the structure
    p.age = 25;
    p.scores[0] = 95; p.scores[1] = 88; p.scores[2] = 92;
    p.matrix[0][0] = 1; p.matrix[0][1] = 2;
    p.matrix[1][0] = 3; p.matrix[1][1] = 4;
    p.name = "John Doe";
    p.height = 5.9;

    // Output the values of the structure
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Scores: " << p.scores[0] << ", " << p.scores[1] << ", " << p.scores[2] << endl;
    cout << "Matrix: \n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << p.matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Height: " << p.height << " feet" << endl;

    return 0;
}
