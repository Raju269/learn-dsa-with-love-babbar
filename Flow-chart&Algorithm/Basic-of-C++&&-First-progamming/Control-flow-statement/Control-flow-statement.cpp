#include<iostream>
using namespace std;
int main(){
    // Control flow statement 
    // if -statement 
    // if - else statement 
    // if - else if - else statement 
    // Nested if statement 
    int age; 
    cout<<"Enter you age is : "<<endl;
    cin>>age;
    if(age>18){
        cout<<"You can vote "<<endl;
    }

    int budgets;
    cout<<"Enter your budgets to buy a cars : ";
    cin>>budgets;
    if(budgets>100000){
        cout<<"You can buy a cars "<<endl;
    }
    else{
        cout<<"Other wise you cannot buy the cars "<<endl;
    }
    
    int checkNumber ;
    cout<<"check the number is +ve , -ve and zero ";
    cin>>checkNumber;
    if(checkNumber>0){
        cout<<"This is positive number : "<<endl;
    }
    else if (checkNumber<0){
        cout<<"This is negative number : "<<endl;
    }
    else{
        cout<<"This is number is zero "<<endl;
    }
    return 0 ; 
}