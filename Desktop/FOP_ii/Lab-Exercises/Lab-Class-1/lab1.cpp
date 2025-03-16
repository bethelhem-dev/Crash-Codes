// Declare & Define a function that returns the largest value of three numbers.(pass by value)
#include <iostream>
using namespace std;
int func(int num1, int num2, int num3);
int main(){

    int x, y, z, result;
    cout<<"Enter three numbers: ";
    cin>>x>>y>>z;
    
     result=func(x,y,z);
     cout<<"The largest numbers is: "<<result;

   return 0;

}int func(int num1, int num2, int num3){
    if (num1>num2 & num1>num3)
    return num1;
    else if (num2>num1 & num2>num3)
    return num2;
    else 
    return num3;
}
