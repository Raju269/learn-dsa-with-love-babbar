#include<iostream>
#include<cmath>
using namespace std;
int decimaltobinaryMethod1(int n){
    // Division Method
    while(n>0){
        int bit = n%2;
        cout<<bit<<endl;
        n = n/2;
    }
    return 0;
}
int main(){
    // Decimary to Binary conversation 
    int n;
    cin>>n;
    int binary = decimaltobinaryMethod1(n);
    return 0;
}