//
// Created by Foysal Munsy on 01 / 05 / 2024
// Time: 20 : 50 : 37
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
    ll n, m;
    cin >> n >> m;
    deque<ll> a(n), b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    if (n < 4 || m < 4 || (n + m < 11))
    {
        cout << "-1\n";
    }
    else
    {
        //
        sort(rall(a));
        sort(rall(b));
        debug(a, b);
        ll mx_score = 0, bat = 0, bowl = 0;
        for (int i = 0; i < 4; i++)
        {
            mx_score += a.front();
            mx_score += b.front();
            a.pop_front();
            b.pop_front();
        }

        for (ll i = 0; i < b.size(); i++)
        {
            a.push_back(b[i]);
        }
        sort(rall(a));
        mx_score += a[0] + a[1] + a[2];
        cout << mx_score << '\n';
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
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}