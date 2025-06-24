#include<iostream>
using namespace std;
int main(){
    int n ; 
    cout<<"Enter the value of n is : ";
    cin>>n;
    for(int i = 0 ; i<n;i++){
        int totalrows = i+1;
        for(int j = 0 ; j<totalrows; j++)
        {
            if(i==0||i==n-1||j==0||i==j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0 ;
}