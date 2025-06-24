#include<iostream>
using namespace std;
int main(){
    // find the factorial number 
    int n ; 
    cout<<"Enter the vlaue of n is : ";
    cin>>n ; 
    int factorial = 1; 
    for(int i = n ; i > 0 ; i--){
        factorial *= i ;
    }
    cout<<"The factorial number of "<<n<<" is : "<<factorial<<endl;

    return 0; 
}