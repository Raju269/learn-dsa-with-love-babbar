#include<iostream>
using namespace std;
int main(){
    int n ,m ;
    cout<<"Enter the value of n is  : "<<endl;
    cin>>n;
    cout<<"Enter the value of m is  : "<<endl;
    cin>>m;
    for(int i = 1 ; i <=n ; i++){
        for(int j = 1 ; j <=m ; j++ ){
            cout<<i<<j<<endl;
        }
        cout<<endl;
    }
    return 0;
}