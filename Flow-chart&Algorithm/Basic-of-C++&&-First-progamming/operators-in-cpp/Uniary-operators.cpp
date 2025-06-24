#include<iostream>
using namespace std;
int main(){
    // Unary operator 
    // ++ , --
    // preincreament  , predecrement 
    // post increment . postdecrement . 
    int a;
    cout<<"Enter the value of a is  : ";
    cin>>a;
    a++;  // Postincrement - phele use karo phir increment karo 
    cout<<a<<endl;;
    ++a; //     Preincrement - pehle increment kardo , phir use karo 
    cout<<a<<endl;

    int b ; 
    cout<<"Enter the value of b is : ";
    cin>>b;
    b--; // Post decrement phele use karo value ko then phir increment karo dhu ; 
    cout<<b<<endl;
    --b; // Pre decrement Phele decrement kar dhu phir use karo dhu value ko ; 
    cout<<b<<endl;


    return 0;
}