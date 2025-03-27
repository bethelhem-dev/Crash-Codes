//create a structure called student with member variables: id, name, mark[10], sum & rank. Define a function called getdata that to get the values from the user, a function called total that passes the sturcture variable and finds the sum of all the marks and a function called rank that finds he grade baed on the sum.
// senario:
// How many students: 2
// How many courses: 4
// Enter student 1 details: 1 2 3 Abebe 
// 85 84 83 82
// Enter student 2 details: 1 2 4 selam
//  78 79 80 81
// Displaying details:
// ID  Name  SUm  Rank
// 123 Abebe 334  1
//124  Selam 318  2
#include <iostream>
using namespace std;
struct student
{
    int id;
    string name;
    float mark[10];
    float sum;
    int rank;
};
void getdata(student students[], int sNum, int cNum){
    for (int i = 0; i < sNum; i++) {
        cout << "Enter student " << i + 1 << " ID and Name: ";
        cin >> students[i].id >> students[i].name;
        cout << "Enter " << cNum << " marks: ";
        for (int j = 0; j < cNum; j++) {
            cin >> students[i].mark[j];
        }
    }

}
void total(student students[], int sNum, int cNum){
   // cout<<"hi";
    for(int i=0; i<sNum; i++){
        students[i].sum=0;
        for(int j=0; j<cNum; j++){
            students[i].sum+=students[i].mark[j];
        }  
    }
}
void assignRank(student students[], int sNum){
      //cout<<"hi";
    for(int i=0; i<sNum; i++){
        for(int j=i+1; j<sNum; j++){
            if(students[i].sum<students[j].sum){
                  //cout<<"hi";
                student temp= students[i];
                students[i]=students[j];
                students[j]=temp;
            }
        }   // cout<<"hi";
         // cout<<students[0].sum<<" ";
    } 
    for(int i=0; i<sNum; i++){
        cout<<students[i].sum<<" ";
        students[i].rank=i+1;
    }
     // cout<<"hi";
}

void display(student students[], int sNum) {
    cout << "\nDisplaying details:\n";
    cout << "ID\tName\tSum\tRank\n";
    for (int i = 0; i < sNum; i++) {
        cout << students[i].id << "\t" << students[i].name << "\t" << students[i].sum << "\t" << students[i].rank << endl;
    }
}


int main() {
    int sNum, cNum;
    cout<<"How many students: ";
    cin>>sNum;
    cout<<"How many courses:";
    cin>>cNum;
    student students[sNum];
    getdata(students, sNum, cNum);
    total(students, sNum, cNum);
    assignRank(students, sNum);
    display(students, sNum);
    


}
