#include<iostream>
using namespace std;
int main(){
    // Do-while loop 
    int i,n;
    i = 0; 
    cout<<"Enter the vlaue of  n is  : ";
    cin>>n;
    do{
        cout<<"Number is : "<<i<<endl;
        i++;
    }while(i<n);
    return 0;
}
