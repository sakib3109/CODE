/*Given a boolean 2D array where each row a 
sorted. Find the row with the maximam number
of 1s.*/ 
//left most one problem check which row has left one
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int leftMostOneRow(vector<vector<int>> &v)
{
    int leftMostone = -1;
    int maxonesRow = -1;
    int j = v[0].size()-1;

    //finding leftmost one in row

    while(j>=0 && v[0][j] == 1)
    {
        leftMostone = j;
        maxonesRow = 0;
        j--;
    }

    //check in rest of the rows if we can find a one left to the right in most one
    for(int i=1; i<v.size(); i++)
    {
        while(j>=0 && v[i][j]==1)
        {
            leftMostone = j;
            j--;
            maxonesRow = i;
        }
    }
    
    return maxonesRow;

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
    int res = leftMostOneRow(vec);

    cout << res << endl;
    return 0;
}