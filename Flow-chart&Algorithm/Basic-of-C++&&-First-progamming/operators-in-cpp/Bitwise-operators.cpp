#include <iostream>
using namespace std;
int main()
{
    //  Bitwise operators
    //  Find the number of 1s in the binary form of a number (use &, >>).

    // Swap two numbers using XOR (^).

    // Multiply a number by 2 using left shift (<<).

    // Divide a number by 4 using right shift (>>).

    // Check if a number is even or odd using bitwise AND (&).

    int x ,y ;
    cout<<"Enter the value of x  is : ";
    cin>>x;
    cout<<"Enter the value of  y is : ";
    cin>>y;
    cout<<"The bitwise & of x and y is : "<<( x & y )<<endl;
    cout<<"The bitwise | of x and y is : "<<( x | y )<<endl;
    cout<<"The bitwise | of x and y is : "<<( ~x  )<<endl;
    cout<<"The bitwise | of x and y is : "<<( x >> 2 )<<endl;
    cout<<"The bitwise | of x and y is : "<<( x << 2 )<<endl;
    cout<<"The bitwise | of x and y is : "<<( x ^ y )<<endl;

    int n; 
    cout<<"Enter the value of n is : "<<endl;
    cin>>n;
    cout<<"This the number is even or odd "<<endl;
    if(n&1){
        cout<<"This is odd number ";
    }
    else{
        cout<<"This is even number ";
    }
    return 0;
}