#include<iostream>
using namespace std;
int main(){

    // for loop condition ;
    {
        int n; 
    cout<<"Enter the value of n is: ";
    cin>>n;
    for(int i = 0; i<n; i++){
        cout<<i<<endl;
    }
    }

    // Reverse loop 
    {
        int n;
        cout<<"Enter the value n is : ";
        cin>>n;
        for(int i = n; i>0; i--){
            cout<<i<<endl;
        }
    }
    
    return 0;
}