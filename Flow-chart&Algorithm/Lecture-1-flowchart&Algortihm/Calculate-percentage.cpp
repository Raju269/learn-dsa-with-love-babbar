#include<iostream>
using namespace std;
int main(){
    // Calculate the percentage value ; 
    // by user entry the value 
    int English, Physics,Chemistry,Mathematics, IP ;
    cout<<"Enter the marks value of English is : ";
    cin>>English;
    cout<<"Enter the marks value of Physics is : ";
    cin>>Physics;
    cout<<"Enter the marks value of Chemistry is : ";
    cin>>Chemistry;
    cout<<"Enter the marks value of Mathematics is : ";
    cin>>Mathematics;
    cout<<"Enter the marks value of IP is : ";
    cin>>IP;
    float sum = (English+Physics+Chemistry+Mathematics+IP);
    float total = 500;
    float percentage = (sum / total )*100; // integer / integer give integer value make sure calculation we used float value 
    cout<<"Calculate the percentage value is : "<<percentage;    
    return 0 ;
}