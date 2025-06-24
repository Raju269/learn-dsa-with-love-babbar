#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of num  is : "<<endl;
    cin>>num;
    if(cin.fail()){
        cout<<"Failed"<<endl;
    }
    else{
        cout<<"Success"<<endl;
    }
    return 0;
}