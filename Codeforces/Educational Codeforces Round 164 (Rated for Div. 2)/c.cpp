//Problem link: https://codeforces.com/contest/1954/problem/C

//
// Created by Foysal Munsy on 20 / 04 / 2024
// Time: 10 : 55 : 20
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
    string x, y;
    cin >> x >> y;
    int aa = 0, bb = 0, sz = x.size(), idx = 0;

    for (int i = 0; i < sz; i++)
    {

        aa = x[i] - '0', bb = y[i] - '0';
        if (aa == bb)
            continue;
        else
        {
            idx = i;
            break;
        }
    }
    for (int i = idx + 1; i < sz; i++)
    {
        int mx = max(x[i] - '0', y[i] - '0');
        int mn = min(x[i] - '0', y[i] - '0');
        // boro ke choto
        if (aa > bb)
        {
            x[i] = mn + '0';
            y[i] = mx + '0';
        }
        else
        {
            y[i] = mn + '0';
            x[i] = mx + '0';
        }
    }

    cout << x << "\n"
         << y << '\n';
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


