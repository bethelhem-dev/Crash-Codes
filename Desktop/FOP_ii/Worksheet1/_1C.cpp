//Prints the first and the last digit of the entered integer.
#include <iostream>
using namespace std;
void firstDigit_lastDigit(int num){
    int firstDigit, lastDigit;
    int temp=num;
    lastDigit=temp%10;
    while(temp>10){
        temp/=10;
    } firstDigit=temp;
   cout<<"The first digit is "<<firstDigit<<" and the last digit is "<<lastDigit;

}

int main(){
     int num;
    cout<<"Enter a number: ";
    cin>>num;
    firstDigit_lastDigit(num);
    

}