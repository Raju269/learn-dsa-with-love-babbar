#include<iostream>
using namespace std;
int main(){
    // Basic of syntax is: 
    // condition ? expression _if_true: expression_if_flase;

//   Find Greater of Two Numbers
//     Use the ternary operator to find the greater of two numbers.
    int x ,y ;
    cout<<"Enter the value of x is : "<<endl;
    cin>>x;
    cout<<"Enter the value of x is : "<<endl;
    cin>>y;
    cout<<"To check the greater of two number is :"<<endl;
    (x>y)?cout<<"X is greather than Y "<<x:cout<<"Y is greather than X "<<y;
    return 0;
}