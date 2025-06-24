#include<iostream>
using namespace std;
int printCounting(int n ){
    for(int i = 0 ; i < n; i++){
        cout<<i<<endl;
    }
}
int simpleInterest(int p, int r, int t){
    int simpleInterest = (p*r*t)/100;
    return simpleInterest;
}
int Voting(int n){
    if(n>18){
        cout<<"Your eligible ";
    }
    else{
        cout<<"Your not eligible ";
    }
}

int main(){
    //  Write a function to print counting from 1 to 100 ;
    // int n; 
    // cout<<"Enter the value of n is : ";
    // cin>>n;
    // int counting = printCounting(n);
    // cout<<counting<<endl;

    // Write a function to print simple interest 
    // int p , r, t ; 
    // cout<<"Enter the value of principle is : ";
    // cin>>p;
    // cout<<"Enter the value of Rate is : ";
    // cin>>r;
    // cout<<"Enter the value of time is : ";
    // cin>>t;
    // int amount = simpleInterest(p,r,t);
    // cout<<"Simple Interest is : "<<amount<<endl;

    // Write a function to print prime number from 1 to 100 ; 
    // int i , j = 1;
    // int Conts = 0 ; 
    // cout<<"Enter Number is :  ";
    // cin>>i;
    // while(j<= i ){
    //     if(i%j == 0 ){
    //         Conts++;
    //     }
    //     j++;
    // }
    // if(Conts == 2){
    //     cout<<"\n Prime Number : ";
    // }
    // else {
    //     cout<<"\n COmposite Number : ";
    // }

    // int i , conts = 0 , j = 1;
    // cout<<"\n Enter the number is : ";
    // cin>>i;
    // for(j = 1; j<=i; j++){
    //     if(i%j == 0 ){
    //         conts++;
    //     }
    // }
    //     if(conts == 2){
    //         cout<<"This is prime number";
    //     }
    //     else{
    //         cout<<"This is composite number ";
    //     }

    // Write a function check weather someone is eligible for voting or not.
    int age;
    cout<<"Enter you age is : ";
    cin>>age; 
    int checkeligible = Voting(age);

    // Write a function to print prime number from 1 to 100 
    // Write a SIP calculator using functions concepts 
    
    return 0; 

}