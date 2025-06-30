#include<iostream>
using namespace std;
int pyrmaid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<(i+1+j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of  n is : ";
    cin>>n;
    int Numeric_pyramid = pyrmaid(n);
    cout<<Numeric_pyramid<<endl;
    return 0;
}