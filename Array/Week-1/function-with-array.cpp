#include<iostream>
using namespace std;
void printNumber(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter the value of index is :  "<< i << ": ";
        cin>>arr[i];
    }
    // show the value of 0 to n-1 
    for(int i=0;i<n;i++){
        cout<<"Index value of  --->"<<" "<< arr[i]<<endl;

    }
}
int main(){
    int arr[30];
    int size;
    cout<<"Enter the Number of element is : ";
    cin>>size;
    printNumber(arr,size);
    return 0;
}