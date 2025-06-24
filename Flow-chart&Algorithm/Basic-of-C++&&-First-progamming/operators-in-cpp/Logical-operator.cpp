#include<iostream>
using namespace std;
int main(){
    // Check if a number is between 1 and 100 using &&.
    int number; 
    cout<<"Enter any number to check under 1 to 100 in middle or not ";
    cin>>number;
    if(number>0 && number<100){
        cout<<"Your are lie in middle of the number 0 to 100 is : " <<number<<endl;
    }
    else {
        cout<<"Out of the range  ";
    }

    // Check if a number is divisible by 3 or 5 using ||.
    int numberCheck ; 
    cout<<"Enter a number to check is divisible by 3 or 5 ";
    cin>>numberCheck;
    if(numberCheck%3==0 || numberCheck%5==0){
        cout<<"This is divible by 3 or 5 "<<numberCheck<<endl;
    }
    else{
        cout<<"This is not divible by 3 or 5 ";
    }

    int age; 
    cout<<"Enter your age is : ";
    cin>>age;
    if(age<!18){
        cout<<"You are over age of 50 : "<<age;

    }
    else{
        cout<<"You are not over age "<<age;
    }
    return 0;
}