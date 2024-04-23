//Problem link: https://cses.fi/problemset/task/1070

//
// Created by Foysal Munsy on 24 / 03 / 2024
// Time: 22 : 39 : 03
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
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION\n";
        return;
    }
    if (n == 1)
    {
        cout << 1 << '\n';
        return;
    }
    if (n == 4)
    {
        cout << "2 4 1 3\n";
        return;
    }
    vector<ll> a;
    for (ll i = 1; i <= n; i += 2)
    {
        a.push_back(i);
    }
    for (ll i = 2; i <= n; i += 2)
    {
        a.push_back(i);
    }
    for (auto &i : a)
        cout << i << " ";
    cout << '\n';
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