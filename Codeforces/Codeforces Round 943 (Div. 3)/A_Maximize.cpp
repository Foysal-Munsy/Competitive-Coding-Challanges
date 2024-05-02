//
// Created by Foysal Munsy on 02 / 05 / 2024
// Time: 20 : 46 : 14
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
    int x, ans = -1, fin = 0;
    cin >> x;
    for (int y = 1; y < x; y++)
    {
        ll temp = gcd(x, y) + y;
        if (temp >= ans)
        {
            ans = temp;
            fin = y;
        }
    }
    cout << fin << '\n';
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