#include<iostream>
using namespace std;
int Half_mix_Pyramid(int n){
        for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        for(int k=0;k<2*(i)+1;k++){
            cout<<"  ";
        }
        for(int m=0;m<n-i;m++){
            cout<<"* ";
        }
        cout<<endl;
    }  
}
int reverse_half_mix_pyramid(int n){
    for(int i = 0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        for(int k=0;k<2*(n-i)-1;k++){
            cout<<"  ";
        }
        for(int m=0;m<i+1;m++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int Hollow_Mix_pyramid(int n){
    Half_mix_Pyramid(n);
    reverse_half_mix_pyramid(n);
}
int main(){
    int n;
    cout<<"Enter the value of n is : ";
    cin>>n;
    // int half_Mix_pyramid = Half_mix_Pyramid(n);
    // cout<<half_Mix_pyramid;
    // int Reverse_Half_Mix_pyramid = reverse_half_mix_pyramid(n);
    // cout<<Reverse_Half_Mix_pyramid;
    int Hollow_mix_pyramid = Hollow_Mix_pyramid(n);
    cout<<Hollow_mix_pyramid;
    return 0;
}