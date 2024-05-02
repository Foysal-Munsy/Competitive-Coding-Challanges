//
// Created by Foysal Munsy on 02 / 05 / 2024
// Time: 21 : 25 : 29
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
    vector<ll> a(n - 1), b(n, 0);
    for (auto &i : a)
        cin >> i;

    b[0] = 501;
    for (int i = 1; i < n; i++)
    {
        b[i] = a[i - 1] + b[i - 1];
    }
    debug(b);
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << '\n';
    // cout << 11 % 6;
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