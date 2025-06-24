#include<iostream>
#include<limits> // for numeric_limits 
using namespace std;
int main(){
    cout<<"Signed int (postive and negative value ) Range is : "
    <<numeric_limits<int>::min()<<" to "
    <<numeric_limits<int>::max()<<endl;

    cout<<"Unsigned int Range is 0 to "
    << numeric_limits<unsigned int>::max() << endl;    

    cout<<"Signed Char range : "
    <<(int)numeric_limits<signed char>::min()<<" to "
    <<(int)numeric_limits<signed char>::max()<<endl;

    cout<<"Unsigned char range : "
    <<(int)numeric_limits<unsigned char>::max()<<endl;
    
    cout<<" Short int range is : "
    <<numeric_limits<short int>::min()<<" to "
    <<numeric_limits<short int>::max()<<endl;

    cout<<"Long int range is : "
    <<numeric_limits<long int>::min()<<" to "
    <<numeric_limits<long int>::max()<<endl;

    cout<<"Float range is : "
    <<numeric_limits<float>::min()<<" to "
    <<numeric_limits<float>::max()<<endl;

    cout<<"Double range is : "
    <<numeric_limits<double>::min()<<" to "
    <<numeric_limits<double>::max()<<endl;


    return 0;
}