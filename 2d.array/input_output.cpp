#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  row, coloum;
    cin >> row >> coloum;
    int array[row][coloum];

    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<coloum; j++)
        {
            cin >> array[i][j];
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<coloum; j++)
        {
            cout << array[i][j]<< " ";
        }
        cout << endl;
    }
    
    return 0;
}