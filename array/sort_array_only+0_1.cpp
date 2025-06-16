/*#include<bits/stdc++.h>
#include<vector>
using namespace std;

void sortZeroAndOne(vector<int>&v)
{
    int zero_count = 0;

    for(int ele:v)
    {
        if(ele == 0){
            zero_count++;
        }
    }
    for(int i=0;i<v.size(); i++)
    {
        if(i<zero_count)
        {
            v[i] = 0;
        }
        else
        {
            v[i] =1;
        }
    }
}

int main()
{
    int n;
    cin>> n;
    vector<int> v;

    for(int i=0; i<n; i++)
    {
        int ele;
        cin>> ele;
        v.push_back(ele);
    }
    sortZeroAndOne(v);
    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
} */
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void sortZeroAndOne(vector<int>&v)
{
    int left_ptr= 0;
    int right_ptr = v.size()-1;
    while(left_ptr < right_ptr)
    {
        if(v[left_ptr]==1 && v[right_ptr]==00)
        {
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }
        if(v[left_ptr]==0)
        {
            left_ptr++;
        }
        if(v[right_ptr]==1)
        {
            right_ptr--;
        }
    }
    return;
}

int main()
{
    int n;
    cin>> n;
    vector<int> v;

    for(int i=0; i<n; i++)
    {
        int ele;
        cin>> ele;
        v.push_back(ele);
    }
    sortZeroAndOne(v);
    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
} 