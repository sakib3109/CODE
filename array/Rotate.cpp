#include<iostream>
using namespace std;
int main()
{
    int array[] = {1,2,3,4,5};
    int n= 5;
    int k=3; //how many times rotatet

    k = k%n; // WHEN K IS GEATER THAN n;

    int ansarray[5];
    int j =0 ;
    // inserting last k element in ans array

    for(int i=n-k; i<n; i++)
    {
        ansarray[j++] = array[i];
    }
    // insarting first n-k element of the array
    for(int i=0; i<=k; i++)
    {
        ansarray[j++] = array[i];
    }
    // print ans
    for(int i=0; i<n; i++)
    {
        cout << ansarray[i] << " ";
    }
    cout << endl;

    return 0;
}