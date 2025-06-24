#include<iostream>
using namespace std;
int main(){
    // Check give triangle is valid or not . 
    int a,b,c;
    cout<<"Enter the value of a is : ";
    cin>>a;
    cout<<"Enter the value of b is : ";
    cin>>b;
    cout<<"Enter the value of c is : ";
    cin>>c;
        if((a + b > c) && (b + c > a) && (a + c > b)) {
        cout << "This is a valid triangle" << endl;
    } else {
        cout << "This is NOT a valid triangle" << endl;
    }

    return 0; 
}