/*Given an interger array 'a' return the prefix sum/ running sum in the same array without creating a new array*/
#include<bits/stdc++.h>
#include <vector>
using namespace std;

void runningSum(vector<int> &v)
{
    for(int i=1; i<v.size();i++)
    {
        v[i] += v[i-1];
    }
    return ;
}


int main ()
{
    int n;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    runningSum(v);

    for(int i=0; i<n; i++)
    {
        cout << v[i] <<" ";
    }
    cout << endl;
    return 0;
}