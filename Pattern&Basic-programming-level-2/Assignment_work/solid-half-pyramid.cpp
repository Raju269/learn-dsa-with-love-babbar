#include<iostream>
using namespace std;
void half_pyramid(int n){
     for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void Reverse_half_pyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void solid_half_pyramid(int n){
        half_pyramid(n);
        n--;
        Reverse_half_pyramid(n);
}
int main(){
    int n;
    cout<<"Enter the value of n is : ";
    cin>>n;
    //    for(int i=0;i<=n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // n--;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    solid_half_pyramid(n);
    return 0;
}