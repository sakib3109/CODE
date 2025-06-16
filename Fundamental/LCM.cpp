#include<iostream>
using namespace std;
int main()
{
    int number1,number2,max;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    max = (number1 > number2) ? number1 : number2;

    do
    {
        if(max % number1 == 0 && max % number2 == 0 )
        {
            cout << "LCM: " << max << endl;
            break;
        }
        else {
            max++;
        }
    } while(true);
    
    return 0;
}