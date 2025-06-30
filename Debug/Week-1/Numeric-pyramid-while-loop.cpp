#include<iostream>
using namespace std;

int pyramid(int n){
    int i=1;
    while(i<=n){
        int j=i ; int count = 1; 
        while(count<=i){
            cout<<j<<" ";
            j = j+1;
            count = count + 1; 
        }
        cout<<"\n";
        i=i+1;
    }
}
int main(){
    int n ;
    cout<<"Enter the value of n is : ";
    cin>>n;
    int Numeric_pyramid = pyramid(n);
    cout<<Numeric_pyramid<<endl;
    return 0;
}