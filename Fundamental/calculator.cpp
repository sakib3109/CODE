#include<iostream>
using namespace std;
int main()
{
    char op;
    float number1,number2;
    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> number1 >>number2;

    switch (op){
        case '+':
        cout << "sum is: " << number1 + number2 << endl;
        break;

        case '-':
        cout << "subtraction is: " << number1 - number2 << endl;
        break;

        case '*':
        cout << "multiplication is: " << number1 * number2 << endl;
        break;

        case '/':
        cout << "Division is: " << number1 / number2 << endl;
        break;
       

        default:
        cout << "Error! operator is not correct";
        break;
    }

    return 0;
}