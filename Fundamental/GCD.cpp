#include<iostream>

using namespace std;

int main()
{
    int number1,number2,GCD;
    cout << "Enter two number: ";
    cin >> number1 >> number2;

    if(number2 > number1)
    {
        int temp =number2;
        number2 =number1;
        number1 = temp;
    }

    for(int i=1; i<=number2; i++)
    {
        if(number1 % i == 0 && number2 % i == 0)
        {
            GCD =i;
        }
    }
    cout << "the gcd of Two number : " << GCD<< endl;
    return 0;
}