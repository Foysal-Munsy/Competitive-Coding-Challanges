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
    deque<int> a(n), b(m), c;
    for (int &val : a)
        cin >> val;
    for (int &val : b)
        cin >> val;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    //  3 5 5 7 8
    //  3 4 8

    while (!b.empty())
    {
        if (a.front() <= b.front())
        {
            c.push_back(b.front());
            b.pop_front(), a.pop_front();
        }
        else if (a.front() > b.front())
        {

            b.pop_front();
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (!c.empty())
        {
            cout << c.front() << '\n';
            c.pop_front();
        }
        else
            cout << "-1\n";
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