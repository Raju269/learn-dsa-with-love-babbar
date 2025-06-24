#include <iostream>
using namespace std;
int main()
{
    //     🔹 *6. Assignment Operators (=, +=, -=, =, /=, %=)
    // Read a number and use += to calculate the sum from 1 to N.

    // Use compound assignment to update salary by 10%.

    // Use *= operator to calculate power (a^b) inside a loop.

    // Create a menu-driven program using switch and update values with +=, -= etc.

    // Use assignment operators to calculate the GCD of two numbers.

    int a, b; 
    cout<<"Enter the vlaue of a is :  "<<endl;
    cin>>a;
    cout<<"Enter the vlaue of b is :  "<<endl;
    cin>>b;
    int sum = a+=b;
    cout<<"The sum of two number is : "<<sum<<endl;
    int sub = a-=b;
    cout<<"The sub of two number is : "<<sub<<endl;
    int mul = a*=b;
    cout<<"The mul of two number is : "<<mul<<endl;
    int div = a/=b;
    cout<<"The div of two  number is : "<<div<<endl;
    int module = a%=b;
    cout<<"The module of two number is : "<<module<<endl;

    return 0;
}