//Problem link: https://cses.fi/problemset/task/1672

#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e3+3;
const long long INF = 1e18;
long long d[N][N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // Write C++ code here
    int n,m,q;
    cin >> n >> m >> q;
 
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            d[i][j] = INF;
        }
    }
    for(int i=0; i<m; i++)
    {
        int u,v;
        long long w;
        cin>> u >> v >> w;
        d[u][v] = min(d[u][v],w);
        d[v][u] = min(d[v][u],w);
    }
    for(int i=1; i<=n; i++)
    {
        d[i][i] = 0;
    }
    for(int k=1; k<=n; k++)
    {
        for(int u=1; u<=n; u++)
        {
            for(int v=1; v<=n; v++)
            {
                d[u][v] =min(d[u][v], d[u][k] + d[k][v]);
            }
        }
    }
    for(int i=0; i<q; i++)
    {
        int a,b;
        cin>> a>> b;
        if(d[a][b] == INF)
            cout<< -1 << '\n';
        else
            cout << d[a][b] << '\n';
    }
    return 0;
}
