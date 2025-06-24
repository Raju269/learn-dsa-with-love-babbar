#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of x is  : ";
    cin>>x;
    cout<<"To check this is positive , negative , zero "<<endl;
    if(x>0){
        cout<<"This is positive number";
    }
    else if(x==0){
        cout<<"This is zero number";
    }
    else{
        cout<<"This is negative number";
    }
    return 0;
}