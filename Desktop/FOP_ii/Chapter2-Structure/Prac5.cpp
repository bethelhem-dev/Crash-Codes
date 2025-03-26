/*
5. [structure array with function]
 Given a structure a specification to store the details of 10 students (rollno, name,
 marks in five subject, BoD which it’s type is Date struct), write a program to input
 each students detail using function and perform the following;
 a)
 Compute average score for each student and print the students’ details in
 tabular format along with their scores
 b) Determine andprint students details who scored average mark below 50
*/
#include <iostream>
using namespace std;
struct Date{
    int month;
    int day;
    int year;
};
struct student{
    int RollNum;
    string name;
    float mark[5];
    Date BoD;
    float average;
    float total;
};
int main() {
    struct student info[3];
    for(int i=0; i<3; i++){
        cout<<"Enter Roll Number:"<<endl;
        cin>>info[i].RollNum;
        cout<<"Enter name: "<<endl;
        cin>>info[i].name;
        cout<<"Enter five marks:"<<endl;
        for(int i=0; i<5; i++){
           cin>>info[i].mark[i];
        }
        cout<<"Enter Date of Birth: "<<endl
        cin>>info[i].BoD.month;>>info[i].BoD.date>>info[i].BoD.year;
    }
    for(int i=0; i<3; i++){
        info[i].average=0;
        info[i].total=0;
        info[i].total+=info[i].mark[i];
        info[i].average=info.total/3;
    } 
    cout<<
}