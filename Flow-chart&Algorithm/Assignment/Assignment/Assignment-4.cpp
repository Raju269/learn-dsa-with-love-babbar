#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // find Compound interest. 
    float Amount, Principal,InterestRate,Time;
    cout<<"Enter the value of Principla amount is : ";
    cin>>Principal;
    cout<<"Enter the value of Annual Interest Rate is : ";
    cin>>InterestRate;
    cout<<"Enter the value of Time in years is : ";
    cin>>Time;
    Amount = Principal*(pow(1+InterestRate/100,2));
    float CompoundInterest = Amount-Principal;
    cout<<"Calculated the Compound intereted is : "<<CompoundInterest;
    return 0;
}