#include<iostream>
using namespace std;
int main(){
    // Print the Max number of three number 
    int x,y,z;
    cout<<"Enter the vlaue of z is: ";
    cin>>x;
    cout<<"Enter the vlaue of y is: ";
    cin>>y;
    cout<<"Enter the vlaue of x is: ";
    cin>>z;
    if((x + y > z)){
        cout<<"Z is greater than x and y ";
    }
    else if((y + z > x)){
        cout<<"X is greater than y and z ";
    }
    else{
        cout<<"Y is greater than x and z ";
    }
    return 0 ; 
}