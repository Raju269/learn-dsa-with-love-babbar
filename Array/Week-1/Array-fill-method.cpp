#include<iostream>
using namespace std;
int main(){
    int arr[30];
    int size ;
    cout<<"Enter the Number of element is : ";
    cin>>size;
    fill(arr,arr+5,23);
    fill(arr+5,arr+10,10);
    fill(arr+10,arr+size,40);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}