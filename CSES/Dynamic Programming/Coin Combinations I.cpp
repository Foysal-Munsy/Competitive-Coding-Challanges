//Problem link: https://cses.fi/problemset/task/1635

#include <bits/stdc++.h>
using namespace std;
const long long N= 1e9+7;
vector <long long> dp;
vector <int> coin(100);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // Write C++ code here
    int n, x;
    cin>> n>> x;
 
    for(int i=0; i<n; i++)
    {
        cin >> coin[i];
    }
 
    dp.push_back(1);
 
    for(int i=1; i<=x; i++)
    {
        long long sum =0;
        for(int target=0; target<n; target++)
        {
            if(i-coin[target] >= 0)
                sum = sum + dp[i-coin[target]];
        }
        dp.push_back(sum%N);
    }
    cout << dp[x] << endl;
    return 0;
}
