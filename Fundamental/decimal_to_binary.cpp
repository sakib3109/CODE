#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int binary = 0;
    int power = 1;
    while(n>0)
    {
        int r = n % 2;
        binary += r * power;
        power *=10;
        n/=2;
    }
    cout << binary << endl;
    return 0;
}