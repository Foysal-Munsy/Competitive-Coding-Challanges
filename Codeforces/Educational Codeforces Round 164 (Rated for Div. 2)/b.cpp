//Problem link: https://codeforces.com/contest/1954/problem/B

//
// Created by Foysal Munsy on 19 / 04 / 2024
// Time: 22 : 40 : 04
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
    set<ll> st;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
        st.insert(x);
    }
    if (st.size() == 1)
    {
        cout << "-1\n";
        return;
    }
    ll cnt = 0, ans = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        if (a[0] == a[i])
        {
            cnt++;
        }
        else
        {
            ans = min(ans, cnt);
            cnt = 0;
        }
    }
    ans = min(ans, cnt);
    cout << ans << '\n';
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
