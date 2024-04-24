//
// Created by Foysal Munsy on 24 / 04 / 2024
// Time: 21 : 55 : 11
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
const int N = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    sort(all(a));
    ll s = a[0];
    for (ll i = 1; i < n; i++)
    {
        if (a[i] == 1 || (s == 1 && a[i] > 1))
            s = (s + a[i]) % N;
        else
            s = (s * a[i]) % N;
    }
    cout << s << '\n';
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