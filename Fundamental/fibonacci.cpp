#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int n, term1 =0 , term2= 1, nextterm = 0;
   cout << "Enter the number of terms: ";
   cin >> n;

   cout << "Fibbonacci Serious: ";

   for(int i=1; i<=n; i++)
   {
    if(i==1)
    {
        cout << term1 << ", ";
        continue;
    }
    if(i==2)
    {
        cout << term2 << ", ";
        continue;
    }
    nextterm = term1 + term2;
    term1 =term2;
    term2 = nextterm;

    cout << nextterm  << ", ";
   }

    return 0;
}