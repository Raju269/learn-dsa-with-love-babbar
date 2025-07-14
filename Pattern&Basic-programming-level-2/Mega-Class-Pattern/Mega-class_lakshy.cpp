#include<iostream>
using namespace std;
// Full pryamid ;
int full_Pryamid(int n){
    for(int i=0;i<n;i++){
        // 1 space 
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }
        for(int k =0; k<i+1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int inverted_full_pyrmaid(int n){
    for(int i =0 ;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k =0 ; k<n-i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int Diamond(int n){
    full_Pryamid(n);
    inverted_full_pyrmaid(n);
}
int hollow_full_Pryamid(int n){
   for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        // 1space 
        cout<<" ";
    }
    for(int k=0;k<i+1;k++){
        if(i==0||i==n-1||k==0||k==i+1-1){
            cout<<"* ";
        }else{
            cout<<"  ";
        }
    }
    cout<<endl;
   }
}
int inverted_hollow_full_Pryamid(int n){
    for(int i=0;i<n;i++){
        // 1space 
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0; k<n-i;k++){
            if(i==0||i==n-1||k==0||i+k==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int Hollow__Diamond(int n){
    hollow_full_Pryamid(n);
    inverted_hollow_full_Pryamid(n);
}


int main(){
    int n; 
    cout<<"Enter the value of n is : ";
    cin>>n; 
    // int full_pyramid = full_Pryamid(n);
    // cout<<full_pyramid<<endl;
    // int Inverted_Full_Pyramid = inverted_full_pyrmaid(n);
    // cout<<Inverted_Full_Pyramid<<endl;
    // int full_Diamond = Diamond(n);
    // cout<<full_Diamond<<endl;
    //  int Hollow_full_pyramid = hollow_full_Pryamid(n);
    // cout<<Hollow_full_pyramid<<endl;
    //  int Inverted_Hollow_full_pyramid = inverted_hollow_full_Pryamid(n);
    // cout<<Inverted_Hollow_full_pyramid<<endl;
    int Hollow_Diamond = Hollow__Diamond(n);
    cout<<Hollow__Diamond<<endl;
    
    return 0;
}