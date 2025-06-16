/*given an array of integers of size n. answer q queries
 where you need to print the sum of value in a given 
 range of indoces from I to R(both include). the 
value of I and R in queries follow 1-besed indexing.*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n+1,0);
    for(int i=1; i<=n; i++)
    {
        cin >> v[i];
    }

    // prefix sum caculate
    for(int i=1; i<=n; i++)
    {
        v[i] += v[i-1];
    }
    int q;
    cin >> q;

    while(q--)
    {
        int l,r;
        cin >>l >> r;

        int ans = 0;
        //ans = prefix_sum[r] - prefix_sum[l-1]
        ans = v[r] - v[l-1];
        cout << ans << endl;
    }
    return 0;
}