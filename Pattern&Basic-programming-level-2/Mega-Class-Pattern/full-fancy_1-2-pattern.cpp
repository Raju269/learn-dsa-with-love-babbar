#include<iostream>
using namespace std;
int full_fancy_1_2(int n){
      for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2==0){
                cout<<(i+1);
            }
            else{
                
                cout<<" * ";
            }
        }
        cout<<endl;
    }
}
int inverted_1_2(int n){
      for(int i=0;i<n;i++){
        for(int j=0;j<2*(n-i)-1;j++){
            if(j%2==0){
                cout<<(n-i);
            }
            else{
                
                cout<<" * ";
            }
        }
        cout<<endl;
    }
}
int complete_full_fancy_1_2(int n){

    full_fancy_1_2(n);
    n--;
    inverted_1_2(n);
}
int main(){
     int n ; 
    cout<<"Enter the value of n is : ";
    cin>>n;
    int full_fancy = complete_full_fancy_1_2(n);
    cout<<full_fancy;
    return 0;
}