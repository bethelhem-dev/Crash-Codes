//a. Counts the number of digits in an integer number (E.g. 23,498 has five digits)
#include <iostream>
using namespace std;
void count(int n){
    if (n==0){
    cout<<n<<" has 1 digit";
    return;
    }
    int temp=0;
    int num=n;
    while(num!=0){
        num/=10;
        temp++;
    } cout<<n<<" has "<<temp<<" digits";
    
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    count(num);

}