#include<iostream>
using namespace std;
int main(){
    // To calculate the area of rectangle is : L*b;
    int len = 5;
    int bred = 10;
    int area = (len*bred);
    cout<<"The area of reactangle is :"<<area<<endl;
    int length;
    int breadth;
    cout<<"Enter the value of length is :";
    cin>>length;
    cout<<"Enter the value of breadth is :";
    cin>>breadth;
    int Area_of_rectangle = length*breadth;
    cout<<"Calculate the  Area-of-rectangle is :"<<Area_of_rectangle<<endl;
    return 0;
}