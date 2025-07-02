#include <iostream>
using namespace std;
int main()
{
    // int brr[4]= {0};
    // for(int i=0;i<4;i++){
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;
    // int crr[5] = {10,20};
    // for(int i=0;i<5;i++){
    //     cout<<crr[i]<<" ";
    // }
    int arr[10];
    int size;
    cout << "Enter the number of element (max 10): ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the input value of index is : " << i <<":  ";
        cin >> arr[i];
    }
    int totalBytes = sizeof(arr);
    int one_Bytes = sizeof(int);
    int num_element = totalBytes / one_Bytes;
    cout << "Total size of (in bytes )" << totalBytes << endl;
    cout << "Size of one int : " << one_Bytes << endl;
    cout << "Nummber of element " << num_element << endl;
    cout << "Number of elements you entered: " << size << endl;
    return 0;
}
// ⚠️ Important:
// This only works when the array is declared in the same function (scope).

// ❌ Doesn’t work if passed to a function:
// cpp
// Copy
// Edit
// void checkSize(int arr[]) {
//     cout << sizeof(arr); // ❌ This gives size of pointer, not array
// }
// Because arr[] decays into a pointer when passed to a function.