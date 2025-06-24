#include <iostream>
using namespace std;
int sumofNumber(int x, int y)
{
    int sum = x + y;
    return sum;
}

int mulofNumber(int x, int y)
{
    int mul = x * y;
    return mul;
}
void sayMyName()
{
    cout << "Raju kumar";
}

void printMyName()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << "Raju kuamr" << endl;
    }
}
int convertintoCelcius(int far)
{
    int celcicus = (far - 32) * 5 / 9;
    return celcicus;
}
char convertintoUppercase(char ch)
{
    char answer = ch - 'a' + 'A';
    return answer;
}
int main()
{
    //  function
    // int a, b ;
    // cout<<"Enter the value of a is : ";
    // cin>>a;
    // cout<<"Enter the value of b is : ";
    // cin>>b;
    // int sumValue = sumofNumber(a,b);
    // cout<<"The sum of two number is : "<<sumValue<<endl;
    // int multiplication = mulofNumber(a,b);
    // cout<<"The multiplication of two number is : "<<multiplication<<endl;
    // sayMyName();
    printMyName();

    int far;
    cout << "Enter the value of far is : ";
    cin >> far;
    int calculatedCelcicus = convertintoCelcius(far);
    cout << "Celcicius Temperature is : " << calculatedCelcicus << endl;
    char result = convertintoUppercase('k');
    cout << result << endl;

    return 0;
}