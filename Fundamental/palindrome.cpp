#include<iostream>
using namespace std;
int main()
{
    int  number,temp,Reverse = 0;
    cout << "Enter a positive number : ";
    cin >> number ;
    temp = number;
    while(number > 0)
    {
        int r = number % 10;
        Reverse = Reverse*10 + r;
        number = number / 10;
    }
    if(temp == Reverse)
    {
        cout << "The number is palindrome.";
    }
    else{
        cout << "The number is not palindrome.";
    }

    return 0;
}