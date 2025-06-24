#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the value of rows is : ";
    cin>>rows;
    int columns;
    cout<<"Enter the value of columns is : ";
    cin>>columns;
    for(int i = 0 ; i<rows; i++){
        for(int j = 0 ; j<columns; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}