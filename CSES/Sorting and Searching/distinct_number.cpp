//
// Created by Foysal Munsy on 13 / 01 / 2026
// Time: 11 : 42 : 45
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
// Distinct Number - https://cses.fi/problemset/task/1621
void solve()
{
    int n;
    cin >> n;
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    cout << st.size() << "\n";
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