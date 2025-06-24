#include<iostream>
using namespace std;
int main(){
    // Create a calculator using switch case that performs:
    // Addition, Subtraction, Multiplication, Division based on user input.

    int x,y;
    cout<<"Enter the value of x is : ";
    cin>>x ; 
    cout<<"Enter the value of y is : ";
    cin>>y; 
    char operations ; 
    cout<<"Enter your operation symbols is +, -, *,/ ";
    cin>>operations;
    switch(operations){
        case '+':
        cout<<"The sum of x and y is : "<<x+y<<endl;
        break;
        case '-':
        cout<<"The sub of x and y is : "<<x-y<<endl;
        break;
        case '*':
        cout<<"The mul of x and y is : "<<x*y<<endl;
        break;
        case '/':
        cout<<"The div of x and y is : "<<x/y<<endl;
        break;
        default :
        cout<<"This is out of the symbols "<<endl;
        break;
    }
    return 0;
}