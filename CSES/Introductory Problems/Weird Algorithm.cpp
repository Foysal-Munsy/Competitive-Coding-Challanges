//Problem link: https://cses.fi/problemset/task/1068



//
// Created by Foysal Munsy on 21 / 02 / 2024
// Time: 17 : 41 : 14
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
    vector<ll> a;
    while (n > 1)
    {
        a.push_back(n);
 
        if (!(n & 1)) // if n is even, it divides by 2
            n = n / 2;
        else // if n is odd, it multiplies by 3 and adds 1
            n = (n * 3) + 1;
    }
    a.push_back(n);
 
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
