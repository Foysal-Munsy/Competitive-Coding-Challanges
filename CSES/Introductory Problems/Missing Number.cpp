//Problem link: https://cses.fi/problemset/task/1083

// Created by Foysal Munsy on 21 / 02 / 2024
// Time: 17 : 54 : 01
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
    deque<ll> a(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x] = x;
    }
    a.pop_front();
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cout << i + 1 << '\n';
            break;
        }
    }
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


