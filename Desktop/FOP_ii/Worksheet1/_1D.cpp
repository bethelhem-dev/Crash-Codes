//Finds the sum of first and last digit of a number
#include <iostream>
using namespace std;
int sumOfFisrtAndLastDigits(int num){
    int firstDigit, lastDigit, sum=0;
    int temp=num;
    lastDigit=temp%10;
    while(temp>=10){
        temp/=10;
    } firstDigit=temp;
   sum=firstDigit+lastDigit;
//    cout<<"The sum of the first and the last digits are: "<<sum;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int sum=sumOfFisrtAndLastDigits(num);
    cout << "The sum of the first and last digits is: " << sum << endl;



}