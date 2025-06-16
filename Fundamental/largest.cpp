#include<iostream>
using namespace std;
int main()
{
    int number1, number2, number3;
    cout << "Enter three number: ";
    cin >> number1 >> number2 >> number3;
    if(number1<number2)
    {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }
    if(number2<number3)
    {
        int temp = number2;
        number2 = number3;
        number3 = temp;
    }
    if(number1<number2)
    {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }
    cout << "Largest number is : "<<number1 <<endl;

    return 0;
}