#include<iostream>
using namespace std;
int main(){
    // Write a program to print the day of the week using switch (1 = Monday, ..., 7 = Sunday).
    int day;
    cout<<"Enter the day number is 1 to 7 : ";
    cin>>day;
    switch(day){
        case 1:
            cout<<"This is Monday : ";
            break;
        case 2:
            cout<<"This is Tuesday : ";
            break;
        case 3:
        cout<<"This is Wednesday : ";
            break;
        case 4:
        cout<<"This is Thursday : ";
            break;
        case 5: 
        cout<<"This is Friday : ";
            break;
        case 6:
        cout<<"This is Saturday : ";
            break;
        case 7:
        cout<<"This is Sunday : ";
            break;
        default :
        cout<<"This is out of the Range ";
            break;

    }
    return 0;
}