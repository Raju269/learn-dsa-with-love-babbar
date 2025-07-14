#include <iostream>
using namespace std;

int squarePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int CalculatedRectangle(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
int Calculated_Hollow_Rectangle(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int Calculated_Hollow_Square(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int PyrmaidPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int Inverted_Pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int Hollow_pyramid1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || i == j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int Hollow_inverted_pyramid2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || i + j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int Numeric_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << (j + 1);
        }
        cout << endl;
    }
}
int Inverted_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << (j + 1) << " ";
        }
        cout << endl;
    }
}
int mix_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < 2 * (i) + 1; k++)
        {
            cout << "  ";
        }
        for (int m = 0; m < n - i; m++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int mix_inverted_Pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++)
        {
            cout << "  ";
        }
        for (int m = 0; m < i+1; m++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int mix_pyramid_Full(int n)
{
    mix_pyramid(n);
    mix_inverted_Pyramid(n);
}
int fancy_1_Pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2==0){
                cout<<i+1<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}
int ABCD(int n){
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<i+1;j++){
            cout<<ch<<" ";
            ch++;
        }
        ch--;
        while(ch>'A'){
            ch--;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int a = 10;
    // int ans = ++a*a++;
    // int ans = (++a)*(a++);
    // cout<<ans<<endl;

    // using fucntion to use pattern question
    // int n ;
    // cout<<"Enter the value of n is : ";
    // cin>>n;
    // int Calulated_square_pattern = squarePattern(n);
    // cout<<Calulated_square_pattern;

    // Calulated Rectangle
    int n, m;
    cout << "Enter the value of  n is : ";
    cin >> n;
    // cout<<"Enter the value of m is : ";
    // cin>>m;
    // int Rectangle = CalculatedRectangle(n,m);
    // cout<<Rectangle<<endl;
    // int Hollow_Rectangle = Calculated_Hollow_Rectangle(n,m);
    // cout<<Hollow_Rectangle<<endl;
    // int Hollow_Square = Calculated_Hollow_Square(n);
    // cout<<Hollow_Square<<endl;
    // int Pyrmaid = PyrmaidPattern(n);
    // cout<<Pyrmaid<<endl;

    // int inverted_pyramid = Inverted_Pyramid(n);
    // cout<<inverted_pyramid<<endl;

    // int Hollow_pyramid = Hollow_pyramid1(n);
    // cout<<Hollow_pyramid<<endl;
    // int Hollow_inverted_pyramid = Hollow_inverted_pyramid2(n);
    // cout<<Hollow_inverted_pyramid<<endl;

    // int Numeric_half_pyramid = Numeric_pyramid(n);
    // cout<<Numeric_half_pyramid<<endl;

    // int Inverted_Numeric_half_pyramid = Inverted_pyramid(n);
    // cout<<Inverted_Numeric_half_pyramid<<endl;

    // int Mix_pyramid12 = mix_pyramid(n);
    // cout<<Mix_pyramid12<<endl;
    // int mix_inverted_pyramid12 = mix_inverted_Pyramid(n);
    // cout << mix_inverted_pyramid12 << endl;
    // int total_mix_pyramid = mix_pyramid_Full(n);
    // cout << total_mix_pyramid;
    // cout<<fancy_1_Pattern(n);
    cout<<ABCD(n);
    return 0;
}
