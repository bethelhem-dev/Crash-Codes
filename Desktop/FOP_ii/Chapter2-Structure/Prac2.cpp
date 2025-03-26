/*
 2.[Nested & array of structure]
 Modify the program you design for Ex. 1 so that the program asks names of 10
 persons and also phone numbers. Use the phone structure in the previous exercise
 and create another structure that includes names of persons and phone structure.
*/
#include <iostream>
using namespace std;
#include <string>
    struct phone
{
    int areaCode;
    int exchange;
    int number;
};  
    struct userDetail {
        string name;
        phone information;
    } people[10] ;
int main() {
    
    for(int i=0; i<10; i++){
        cout<<"Enter name :";
        cin>>people[i].name;
        cout<<"Enter the area code, exchange, and number:"<<endl;
        cin>>people[i].information.areaCode;
        cin>>people[i].information.exchange;
        cin>>people[i].information.number;        
    }
    cout<<"The information you entered: "<<endl;
    cout<<"name\tareacode_exchange_number"<<endl;
    for(int i=0; i<10; i++){
    cout<<people[i].name<<"\t"<<people[i].information.areaCode<<"-"<<people[i].information.exchange<<"-"<<people[i].information.number<<endl;

    }
}