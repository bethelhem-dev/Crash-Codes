/*
Accept input from the user for all the struct attributes.
Calculate the sum of the marks from the scores array.
Compare the sum of the marks to check if it is even or odd:
If the sum is even, we'll add 10 to the sum and display the result.
If the sum is odd, we'll just display the sum without adding anything.
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

    // Display the sum of the marks
    cout << "Sum of marks: " << sumOfMarks << endl;

    // Check if the sum of marks is even or odd
    if (sumOfMarks % 2 == 0) {
        sumOfMarks += 10;  // If even, add 10 to the sum
        cout << "The sum is even, so we add 10: " << sumOfMarks << endl;
    } else {
        cout << "The sum is odd, so we keep it as: " << sumOfMarks << endl;
    }

    // Display the matrix
    cout << "Matrix: \n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << p.matrix[i][j] << " ";
        }
        cout << endl;
    } 
 
    // int total=0;
    // for(int i=0; i<2; i++){
    //     for(int j=0; i<2; i++)
    //     total+=p.matrix[i][j];
    //  cout<<"totsl "<<total;
      int total = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            total += p.matrix[i][j];
        }
    } cout<<"total "<<total;
}
