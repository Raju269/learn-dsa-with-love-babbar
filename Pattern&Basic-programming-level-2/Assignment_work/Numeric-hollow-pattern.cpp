#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the value of n is : " ;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(i==0||i==n-1||j==0||i==j){
                cout<<(j+1)<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}