//Problem link: https://cses.fi/problemset/task/1071

//
// Created by Foysal Munsy on 23 / 04 / 2024
// Time: 11 : 56 : 54
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;
 
void solve()
{
    long long x, y;
    cin >> x >> y;
    long long mx = max(x, y);
    long long start = ((mx - 1) * (mx - 1)) + 1, end = mx * mx;
    long long ans = 0;
    if (start & 1) // odd case
    {
        if (x < y)
        {
            ans = end - (x - 1);
        }
        else if (x > y)
        {
            ans = start + (y - 1);
        }
        else // x==y
        {
            ans = end - (x - 1);
        }
    }
    else // even case
    {
        if (x < y)
        {
            ans = start + (x - 1);
        }
        else if (x > y)
        {
            ans = end - (y - 1);
        }
        else
        {
            ans = end - (x - 1);
        }
    }
    cout << ans << '\n';
}
 
signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    ll cs = 1;
    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}


