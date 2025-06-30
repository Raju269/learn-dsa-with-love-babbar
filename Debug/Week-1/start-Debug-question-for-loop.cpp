#include<iostream>
using namespace std;
int star_pyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        for(int k=0;k<2*(i)+1;k++){
            cout<<"* ";
        }
        for(int m=0;m<n-i-1;m++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
int main(){
    int n ; 
    cout<<"Enter the value of n is : ";
    cin>>n;
    int star = star_pyramid(n);
    cout<<star<<endl;
    return 0;
}