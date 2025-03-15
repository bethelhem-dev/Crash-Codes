#include <iostream>
#include "disp.cpp"
using namespace std;
void findLargestSmallest(int x, int y, int z, int &largest, int &smallest) {
    if (x > y && x > z)
        largest = x;
    else if (y > x && y > z)
        largest = y;
    else
        largest = z;
    if (x < y && x < z)
        smallest = x;
    else if (y < x && y < z)
        smallest = y;
    else
        smallest = z;
}


int main() {
    int x, y, z,largest, smallest;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
     findLargestSmallest(x, y, z, largest, smallest);
    display(largest, smallest);

    return 0;
}
