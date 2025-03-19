#include <iostream>
using namespace std;
#include <string>
struct student
{
    int ID;
    string name;
    float finalMark[5];
    string Grade[5];
    int GPA;
};
int main(){
    student s1;
    float totalWeightedGrade = 0.0; // To store weighted grades
    float gradeValue[5]; // To store grade points

    cout<<"Enter Your ID: ";
    cin>>s1.ID;
     cin.ignore();
    cout<<"Enter your name: ";
    getline(cin, s1.name);
    cout<<"Enter your five subjects Final Mark: ";
   
    for(int i=0; i<5; i++){
        float gradeValue[5];
        cin>>s1.finalMark[i];
    if(s1.finalMark[i]>=90){
     s1.Grade[i]="A+";
     gradeValue[i]=4.0;
    }
     else if(s1.finalMark[i]>=85){
     s1.Grade[i]="A";
     gradeValue[i]=4.0;
     }
     else if(s1.finalMark[i]>=80){
     s1.Grade[i]="A-";
     gradeValue[i]=3.75;
     }
     else if(s1.finalMark[i]>=75){
     s1.Grade[i]="B+";
     gradeValue[i]=3.5;
     }
     else if(s1.finalMark[i]>=70){
     s1.Grade[i]="B";
     gradeValue[i]=3.0;
     }
     else if(s1.finalMark[i]>=65){
     s1.Grade[i]="B-";
     gradeValue[i]=2.75;
     }
     else if(s1.finalMark[i]>=60){
     s1.Grade[i]="C+";
     gradeValue[i]=2.5;
     }
     else if(s1.finalMark[i]>=50){
     s1.Grade[i]="C";
     gradeValue[i]=2.0;
     }
     else if(s1.finalMark[i]>=40){
     s1.Grade[i]="D";
     gradeValue[i]=1.0;
     }
     else{
     s1.Grade[i]="F";
     gradeValue[i]=0.0;
    }
        totalWeightedGrade += (3 * gradeValue[i]); // Multiply grade by credit hours

      
    //  float temp;
    //  temp+=3*gradeValue[i];
    //  s1.GPA=temp/15;
    }
    s1.GPA = totalWeightedGrade / (5 * 3); // Calculate GPA


   
    cout<<"Student 1 Detail "<<endl;
    cout<<"ID"<<"\t"<<"Name"<<"\t"<<"Grade 1"<<"\t"<<"Grade 2"<<"\t"<<"Grade 3"<<"\t"<<"Grade 4"<<"\t"<<"Grade 5"<<"\t"<<"GPA"<<endl;
    cout<<s1.ID<<"\t"<<s1.name<<"\t"<<s1.Grade[0]<<"\t"<<s1.Grade[1]<<"\t"<<s1.Grade[2]<<"\t"<<s1.Grade[3]<<"\t"<<s1.Grade[4]<<"\t"<<s1.GPA<<endl;
    

    //for student 2

    student s2;
    cout<<"Enter Your ID: ";
    cin>>s2.ID;
     cin.ignore();
    cout<<"Enter your name: ";
    getline(cin, s2.name);
    totalWeightedGrade = 0.0;// Reset for next student

    cout<<"Enter your five subjects Final Mark: ";
  
   for(int i=0; i<5; i++){
        float gradeValue[5];
        cin>>s2.finalMark[i];
    if(s2.finalMark[i]>=90){
     s2.Grade[i]="A+";
     gradeValue[i]=4.0;
    }
     else if(s2.finalMark[i]>=85){
     s2.Grade[i]="A";
     gradeValue[i]=4.0;
     }
     else if(s2.finalMark[i]>=80){
     s2.Grade[i]="A-";
     gradeValue[i]=3.75;
     }
     else if(s2.finalMark[i]>=75){
     s2.Grade[i]="B+";
     gradeValue[i]=3.5;
     }
     else if(s2.finalMark[i]>=70){
     s2.Grade[i]="B";
     gradeValue[i]=3.0;
     }
     else if(s2.finalMark[i]>=65){
     s2.Grade[i]="B-";
     gradeValue[i]=2.75;
     }
     else if(s2.finalMark[i]>=60){
     s2.Grade[i]="C+";
     gradeValue[i]=2.5;
     }
     else if(s2.finalMark[i]>=50){
     s2.Grade[i]="C";
     gradeValue[i]=2.0;
     }
     else if(s2.finalMark[i]>=40){
     s2.Grade[i]="D";
     gradeValue[i]=1.0;
     }
     else{
     s2.Grade[i]="F";
     gradeValue[i]=0.0;}

    //  float temp;
    //  temp+=3*gradeValue[i];
    //  s2.GPA=temp/15;
            totalWeightedGrade += (3 * gradeValue[i]);

    } 
        s2.GPA = totalWeightedGrade / (5 * 3);

    
 
    cout<<"Student 2 Detail "<<endl;
    cout<<"ID"<<"\t"<<"Name"<<"\t"<<"Grade 1"<<"\t"<<"Grade 2"<<"\t"<<"Grade 3"<<"\t"<<"Grade 4"<<"\t"<<"Grade 5"<<"\t"<<"GPA"<<endl;
    cout<<s2.ID<<"\t"<<s2.name<<"\t"<<s2.Grade[0]<<"\t"<<s2.Grade[1]<<"\t"<<s2.Grade[2]<<"\t"<<s2.Grade[3]<<"\t"<<s2.Grade[4]<<"\t"<<s2.GPA<<endl;
    






return 0;
}
