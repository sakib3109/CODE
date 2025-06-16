/*
1234567
2345671
3456712
4567123
5671234
6712345
7123456
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            cout << j;
        }
        for(int j=1; j<=(i-1); j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}