#include <iostream>

using namespace std;

// Define a struct called Part
struct Part {
    int year;
    int quantity;
    double price;
};

int main() {
    // Declare and initialize a struct variable
    Part tyre = {2011, 34, 13.50};

    // Display the values
    cout << "Tyre Details:" << endl;
    cout << "Year: " << tyre.year << endl;
    cout << "Quantity: " << tyre.quantity << endl;
    cout << "Price: $" << tyre.price << endl;

    return 0;
}
