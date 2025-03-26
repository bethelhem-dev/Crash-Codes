/*
 4.[array of structure]
 (Financial) Write a C++program that uses a structure for storing a stock name, its estimated earnings per share, and its estimated price-to-earnings ratio. Have the
 program prompt the user to enter these items for five different stocks, each time using the same structure to store the entered data. When data has been entered for a particular stock, have the program compute and display the anticipated stock price based on the entered earnings and price-per-earnings values. For example, if a user enters the data XYZ, 1.56, 12, the anticipated price for a share of XYZ stock is (1.56) × (12) = $18.72.
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Structure to store stock details
struct Stock {
    string name;
    double earningsPerShare;
    double priceToEarningsRatio;
};

int main() {
    const int SIZE = 5; // Number of stocks
    Stock stocks[SIZE];
    
    // User input for stock details
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter details for stock " << (i + 1) << ":" << endl;
        cout << "Stock Name: ";
        cin >> stocks[i].name;
        cout << "Earnings Per Share: ";
        cin >> stocks[i].earningsPerShare;
        cout << "Price-To-Earnings Ratio: ";
        cin >> stocks[i].priceToEarningsRatio;
    }
    
    // Displaying stock information and calculating anticipated stock price
    cout << "\nStock Information and Anticipated Prices:" << endl;
    cout << left << setw(10) << "Name" << setw(15) << "EPS" << setw(15) << "P/E Ratio" << "Anticipated Price" << endl;
    cout << "---------------------------------------------------" << endl;
    
    for (int i = 0; i < SIZE; i++) {
        double anticipatedPrice = stocks[i].earningsPerShare * stocks[i].priceToEarningsRatio;
        cout << left << setw(10) << stocks[i].name << setw(15) << stocks[i].earningsPerShare << setw(15) << stocks[i].priceToEarningsRatio << "$" << fixed << setprecision(2) << anticipatedPrice << endl;
    }
    
    return 0;
}
