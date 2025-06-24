#include<iostream>
using namespace std;
int main(){
   int n; 
   cout<<"Enter the vlaue of n is : ";
   cin>>n;
   for(int row = 0 ; row < n ; row++){
    int totalcolumns = row+1;
    for(int col = 0 ; col < totalcolumns ; col++){
        if(row == 0 || row == 1 || row == n-1){
            cout<<"*";
        }
        else{
            if(col == 0 || col == totalcolumns - 1 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    }
    cout<<endl;
   }
    return 0;
}