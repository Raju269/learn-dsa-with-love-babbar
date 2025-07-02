#include<iostream>
using namespace std;
int main(){
    // int arr[100];
    // int size;
    // cout<<"Enter the number of element is : "<<endl;
    // cin>>size;
    // for(int i=0;i<size;i++){
    //     cout<<"Enter the input value for index is : "<<i<<endl;
    //     cin>>arr[i];
    // // }
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<"  ";
    // }
    // Continous memory Allocation is : 
    int arr[50];
    int size ;
    cout<<"Enter the number of element is : ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the input value for index is : "<<i<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<"Address of arr["<<i<<"] = "<<&arr[i]<<endl;
    }
    return 0;
}