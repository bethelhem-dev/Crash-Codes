// Define a function that displays the smallest value out of three numbers(use pass by reference)
#include <iostream>
using namespace std;
void func(int num1, int num2, int num3, int &result);
int main(){

    int x, y, z, result;
    cout<<"Enter three numbers: ";
    cin>>x>>y>>z;
    
     func(x,y,z,result);
     cout<<"The smallest numbers is: "<<result;

   return 0;

}void func(int num1, int num2, int num3,int &result ){
    if (num1<num2 & num1<num3)
    result=num1;
    else if (num2<num1 & num2<num3)
    result=num2;
    else 
     result=num3;
}
