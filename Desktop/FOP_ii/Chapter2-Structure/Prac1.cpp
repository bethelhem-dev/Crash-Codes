/*
 [structure Declaration, Definition, initialization and accessing elements]
 A phone number, such as (212) 767-8900, can be thought of as having three parts:
 the area code (212), the exchange (767), and the number (8900). Write a program
 that uses a structure to store these three parts of a phone number separately. Call
 the structure phone.
  Create two structure variables of type phone. Initialize one, and have the
 user input a number for the other one. Then display both numbers.
*/
#include <iostream>
using namespace std;
struct phone
{
    int areaCode;
    int exchange;
    int number;
};
int main() {
    struct phone phone1;
    struct phone phone2;
    phone1={212, 767, 8900};
    cout<<"Enter the area code, the exchange, and the number: (provide space between them) ";
    cin>>phone2.areaCode>>phone2.exchange>>phone2.number;

    cout<<"the phone number:"<<phone1.areaCode<<"-"<<phone1.exchange<<"-"<<phone1.number<<endl;
    cout<<"user entered phone number:"<<phone2.areaCode<<"-"<<phone2.exchange<<"-"<<phone2.number<<endl;


}