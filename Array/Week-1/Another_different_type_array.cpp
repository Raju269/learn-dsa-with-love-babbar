#include <iostream>
using namespace std;
int main()
{
    int arr[50];
    bool brr[50];
    char crr[50];
    double drr[50];
    float frr[50];
    int size;
    cout << "Enter the number of element is : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the input value for index is : " << i << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }

    for (char i = 0; i < size; i++)
    {
        cout << "\n Enter the input value for index is : " << i << endl;
        cin >> crr[i];
    }
    for (char i = 0; i < size; i++)
    {
        cout << crr[i] << " ";
    }

    // Double 
    for(int i=0;i<size;i++){
        cout<<"\n Enter the input value of index is : "<<i<<endl;
        cin>>drr[i];
    }
    for(int i=0;i<size;i++){
        cout<<drr[i]<<" ";

    }
    
    // Float 
    for(int i=0;i<size;i++){
        cout<<"\n Enter the input value of index is : "<<i<<" ";
        cin>>frr[i];
    }
    for(int i=0;i<size;i++){
        cout<<frr[i]<<" ";
    }
    
    // bool
    for(int i=0;i<size;i++){
        cout<<"\n Enter the input value of index is : "<<i<<endl;
        cin>>brr[i];
    }
    for(int i=0;i<size;i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}