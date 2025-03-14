#include <iostream>
using namespace std;
void func(int arry[], int size){
   cout<<"Enter the index you want to search the element: ";
   int num;
   cin>>num;
   if(num>=0 && num<size)
   cout << "Element at index " << num << " is: " << arry[num] << endl;
   else 
   cout<<"invalid index"<<endl;   
}
 void searchElement(int arr[], int size){
    int target;
    cout<<"Enter the element to search for: ";
    cin>>target;
    bool found = false; 
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            cout<<"Element "<<target<<" found at index: "<<i<<endl;
            found=true;
        } 
      }  
      if(!found){ 
        cout<<"doesn't exist"<<endl;
      }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];
   func(arr,n);
   searchElement(arr,n);
   
    
}