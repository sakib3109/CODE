#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int power =1; 
    int decimal = 0;
    while(n>0)
    {
        int r = n % 10;
        decimal += r*power;
        power *=2;
        n /=10;
    }
    cout << decimal <<endl;
    return 0;
}