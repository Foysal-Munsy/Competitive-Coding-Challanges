//
// Created by Foysal Munsy on 24 / 04 / 2024
// Time: 20 : 48 : 05
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
    // 1=6 , 2=5 , 3=4
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    sort(all(a));
    ll sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (a[i] == 1)
            sum += 6;
        else if (a[i] == 2)
            sum += 5;
        else if (a[i] == 3)
            sum += 4;
        else
            sum += a[i];
    }
    for (int i = k; i < n; i++)
        sum += a[i];
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