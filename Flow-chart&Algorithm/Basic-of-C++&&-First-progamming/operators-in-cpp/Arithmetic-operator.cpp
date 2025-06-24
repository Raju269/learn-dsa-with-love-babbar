#include<iostream>
using namespace std;
int main(){
    // Arithmetics operator 
    int  x,y;
    cout<<"Enter the value of x is : "<<endl;
    cin>>x;
    cout<<"Enter the value of y is : "<<endl;
    cin>>y;
    
    float sum = x+y;
    cout<<"The Addition of both x and y is : "<<sum<<endl;
    float sub = x-y;
    cout<<"The subtraction of both x and y is : "<<sub<<endl;
    float mul = x*y;
    cout<<"The Multiplication of both x and y is : "<<mul<<endl;
    float div = x/y ;
    cout<<"The Division of both x and y is : "<<div<<endl;
    int modul = x%y;
    cout<<"The remainder of both x and y is : "<<modul<<endl;
    return 0; 

}