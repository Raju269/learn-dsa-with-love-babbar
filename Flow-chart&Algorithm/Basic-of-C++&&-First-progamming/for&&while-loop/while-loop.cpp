#include<iostream>
using namespace std;
int main(){
    // while - loop 
    // Print n for event number 
    int n ,i ; 
    cout<<"Enter the value of n is : ";
    cin>>n;
    i = 0 ;
    while (i <= n)
    {
        if(i%2==0){

            cout<<"Number is even : "<<i<<endl;
        }
     
        i++;
    }
    
    return 0;
}