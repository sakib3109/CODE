/*Given a boolean 2D array where each row a 
sorted. Find the row with the maximam number
of 1s.*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int maximumOneRow(vector<vector<int>> &v)
{
    int maxOne = INT_MIN;
    int maxOneRow = -1;
    int columns = v[0].size();

    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v.size(); j++)
        {
            if(v[i][j]==1)
            {
                int numberofOne = columns -j;
                if(numberofOne > maxOne)
                {
                    maxOne = numberofOne;
                    maxOneRow = i;
                }
                break;
            }
        }
    }

    return maxOneRow;
}
int main()
{
    int n,m;
    cin >> n >> m;

    vector<vector<int> > vec(n, vector<int> (m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> vec[i][j];
        }
    } 
    int res = maximumOneRow(vec);

    cout << res << endl;
    return 0;
}