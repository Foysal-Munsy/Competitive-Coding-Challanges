//Problem link: https://cses.fi/problemset/task/1094

//
// Created by Foysal Munsy on 24 / 03 / 2024
// Time: 22 : 15 : 54
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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    ll moves = 0;
    for (ll i = 1; i < n; i++)
    {
        ll cur = a[i], prev = a[i - 1];
        debug(cur, prev);
        if (cur < prev)
        {
            ll diff = prev - cur;
            moves += diff;
            a[i] += diff;
            // diff = 0;
            debug(diff, moves);
        }
        // cout << a[i] << nl;
    }
    cout << moves << '\n';
}
 
signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    solve();
    return 0;
}

