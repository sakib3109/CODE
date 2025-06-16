#include<iostream>

using namespace std;

int main()
{
    int number1, number2;
    cout << "Enter two number: ";
    cin >> number1 >> number2;

    while(number1 != number2)
    {
        if(number1 > number2)
        {
            number1 = number1 - number2;
        }
        else{
            number2  = number2 - number1;
        }

    }

    cout << "gcd of two number is : "<< number1 << endl;
    return 0;
}