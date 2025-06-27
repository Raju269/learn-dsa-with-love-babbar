#include<iostream>
using namespace std;
int Square_Pattern(int n ){
    // Pattern Print question 
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int Rectangle_Pattern(int n , int m ){
    for(int i = 0; i< n; i++){
        for(int j = 0 ; j<m ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int hollow_rectangle(int n, int m ){

    for(int i = 0 ; i<n; i++){
        for(int j = 0 ; j<m;j++){
            if(i==0 || i==n-1 || j==0 || j==m-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int hollow_square(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0||i==n-1||j==0||j==n-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int diagonal_square(int n){
    for(int i = 0; i<n;i++){
        for(int j=0; j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1||i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int right_diagonal_square(int n){
    for(int i =0 ; i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1||i+j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int Mix_diagonal_square(int n){
    for(int i =0 ; i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1||i+j==n-1||i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int half_pyramid(int n){
    for(int i =0 ;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int inverted_half_pyrmaid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int hollow_half_pyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(i==0||i==1||j==0||i==n-1||i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int hollow_inverted_pyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(i==0||i==n-1||j==0||i+j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int numeric_pyamid(int n ){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<(j+1)<<" ";
        }
        cout<<endl;
    }
}
int inverted_numeric_pyamid(int n ){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<(j+1)<<" ";
        }
        cout<<endl;
    }
}
int hollow_numeric_pyamid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(i==0||i==n-1|| i== 1 ||j==0||i==j){
                cout<<(j+1)<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int inverted_hollow_numeric_pyamid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(i==0||i==n-1|| i== 1 ||j==0||i+j==n-1){
                cout<<(j+1)<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}


int main(){
    // function call kar ka loop Run kar gha 
    int n , m; 
    cout<<"Enter the value of n is : ";
    cin>>n;
    // cout<<"Enter the value of m is : ";
    // cin>>m;
    // int Square_pattern = Square_Pattern(n);
    // cout<<Square_pattern<<endl;
    // int Rectangle_pattern = Rectangle_Pattern(n,m);
    // cout<<Rectangle_pattern<<endl;
    // int Hollow_Rectangle = hollow_rectangle(n,m);
    // cout<<Hollow_Rectangle<<endl;
    // int Hollow_Square = hollow_square(n);
    // cout<<Hollow_Square<<endl;
    // int Diagonal_Square = diagonal_square(n);
    // cout<<Diagonal_Square<<endl;
    // int Right_Diagonal_square = right_diagonal_square(n);
    // cout<<Right_Diagonal_square<<endl;
    // int MIX_Diagonal_Square = Mix_diagonal_square(n);
    // cout<<MIX_Diagonal_Square<<endl;
    // int Half_Pyramid = half_pyramid(n);
    // cout<<Half_Pyramid<<endl;
    // int Inverted_half_pyrmaid = inverted_half_pyrmaid(n);
    // cout<<Inverted_half_pyrmaid<<endl;
    // int Hollow_Half_pyramid = hollow_half_pyramid(n);
    // cout<<Hollow_Half_pyramid<<endl;
    // int Hollow_inverted_pyramid = hollow_inverted_pyramid(n);
    // cout<<Hollow_inverted_pyramid<<endl;
    // int Numeric_pyamid = numeric_pyamid(n);
    // cout<<Numeric_pyamid<<endl;
    // int Inverted_Numeric_pyamid = inverted_numeric_pyamid(n);
    // cout<<Inverted_Numeric_pyamid<<endl;
    // int Hollow_Numeric_pyamid = hollow_numeric_pyamid(n);
    // cout<<Hollow_Numeric_pyamid<<endl;
    // int Hollow_Numeric_pyamid = inverted_hollow_numeric_pyamid(n);
    // cout<<Hollow_Numeric_pyamid<<endl;
    return 0; 
}