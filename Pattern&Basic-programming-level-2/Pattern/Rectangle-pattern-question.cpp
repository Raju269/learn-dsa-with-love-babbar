#include<iostream>
using namespace std;
int main(){
    int n , m; 
     cout<<"Enter the value of  n is  : ";
    cin>>n;
    cout<<"Enter the value of m is : ";
    cin>>m;
    for(int row = 0 ; row <n ; row++ ){
        for(int column = 0 ; column <m ; column++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}