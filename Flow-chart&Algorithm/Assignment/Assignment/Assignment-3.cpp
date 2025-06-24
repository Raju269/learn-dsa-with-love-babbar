#include<iostream>
using namespace std;
int main(){
    // find simple Interested 
    // SI = (P × R × T) / 100
    int p,r,t;
    cout<<"Enter the value of p , r , t ";
    cin>>p>>r>>t;
    int simple_interested = (( p * r * t )/ 100 );
    cout<<"The simple interested of the give value is : "<<simple_interested<<endl;
    return 0; 
}