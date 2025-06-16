#include<iostream>
using namespace std;
int main()
{
    int number,temp=0;
    cout << "Enter a number: ";
    cin >> number ;
    if(number == 1 || number == 0)
    {
        temp = 1;
    }

    for(int i=2; i<=number/2; i++)
    {
        if(number % i == 0)
        {
            temp = 1 ;
            break;
        }
    }

    if(temp == 0)
    {
        cout << "The number is prime." << endl;
    }
    else{
        cout << "The number is not prime." << endl;
    }
    return 0;
}