#include<iostream>
using namespace std;
int main(){
    // Print 1 to N only Even number 
    int n ; 
    cout<<"Enter the value of n is : ";
    cin>>n;
    for(int i = 0 ; i <= n ; i++){
        if(i%2==0){
            cout<<"This is even number"<<i<<endl;
        }
    }
    return 0; 

}