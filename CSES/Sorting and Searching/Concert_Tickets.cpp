//
// Created by Foysal Munsy on 16 / 01 / 2026
// Time: 11 : 55 : 07
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

// Concert Tickets – https://cses.fi/problemset/task/1091
void solve()
{
    int n, m;
    cin >> n >> m;
    multiset<int> a;
    for (int i = 0, val; i < n; i++)
    {
        cin >> val;
        a.insert(val);
    }
    for (int i = 0, x; i < m; i++)
    {
        cin >> x;
        auto it = a.upper_bound(x);
        auto in = a.begin();
        if (it == in)
        {
            cout << -1 << "\n";
        }
        else
        {
            it--;
            cout << *it << '\n';
            a.erase(it);
        }
    }
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    ll cs = 1;
    ll t = 1;
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}