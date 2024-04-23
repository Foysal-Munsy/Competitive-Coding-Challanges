// problem link : https://cses.fi/problemset/task/1092
//
// Created by Foysal Munsy on 23 / 04 / 2024
// Time: 23 : 28 : 43
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
    ll total_sum = n * (n + 1) / 2;
    if (total_sum & 1)
        cout << "NO\n";
    else
    {
        //
        ll half = total_sum / 2;

        vector<ll> a, b;
        for (ll i = 1; i <= n; i++)
            a.push_back(i);
        reverse(all(a));
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (sum + a[i] < half)
            {
                sum += a[i];
                b.push_back(a[i]);
                a[i] = -1; // considering -1 means delete
            }
            else
                break;
        }
        reverse(all(a));
        for (ll i = 0; i < n; i++)
        {
            if (sum + a[i] == half)
            {
                sum += a[i];
                b.push_back(a[i]);
                a[i] = -1;
                break;
            }
            else
                continue;
        }

        cout << "YES\n"
             << a.size() - b.size() << '\n';
        for (auto i : a)
        {
            if (i != -1)
                cout << i << " ";
        }
        cout << '\n';
        cout << b.size() << '\n';
        for (auto i : b)
        {
            cout << i << " ";
        }
        cout << '\n';
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