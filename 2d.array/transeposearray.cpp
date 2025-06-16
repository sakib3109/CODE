#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row, coloum;
    cin >> row >> coloum;
    int A[row][coloum];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<coloum; j++)
        {
            cin >> A[i][j];
        }
    }
    int transpose_martix[coloum][row];
    for(int i=0; i<coloum; i++)
    {
        for(int j=0; j<row; j++)
        {
            transpose_martix[i][j] = A[j][i];
        }
    }

    for(int i=0; i<coloum; i++)
    {
        for(int j=0; j<row; j++)
        {
            cout << transpose_martix[i][j] << " ";
        }
        cout << endl;
    }  
    return 0;
}