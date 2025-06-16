#include<iostream>

using namespace std;

int main()
{
    int number1, number2,LCM,gcd;
    cout << "Enter two number: ";
    cin >> number1 >> number2;
    int n1 =number1;
    int n2 = number2;
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
    gcd = number1;
    LCM = (n1 * n2) / gcd;
    cout << "the lcm of two nummber is : " << LCM << endl;
    return 0;
}