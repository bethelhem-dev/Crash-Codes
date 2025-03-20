//Prints the reverses the number (E.g. input = 4637215 Output=5217364)
#include <iostream>
using namespace std;
int reverseNumber(int x){
    int temp=0;
    while(x>0){
        temp=temp*10+x%10;
        x/=10;
    } 
    return temp;

}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
   int temp= reverseNumber(num);
   cout<<temp;

}