//
// Created by Foysal Munsy on 24 / 04 / 2024
// Time: 20 : 35 : 50
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
    ll n, x, y;
    cin >> n >> x >> y;
    ll sum = 0, in;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        ll mul1 = in * x;
        if (mul1 > y)
            sum += y;
        else
            sum += mul1;
    }
    cout << sum << '\n';
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