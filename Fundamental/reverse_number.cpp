#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int reverse_digit =0;
    while(n>0)
    {
        int r =n%10;
        reverse_digit = reverse_digit*10 + r;
        n=n/10;
    }
    cout << reverse_digit <<endl;
    return 0;
}