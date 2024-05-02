//
// Created by Foysal Munsy on 02 / 05 / 2024
// Time: 21 : 10 : 37
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
    ll n, m, k = 0;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    for (int i = 0, j = 0; i < n, j < m;)
    {

        if (a[i] == b[j])
        {
            k++;
            i++, j++;
        }
        else
        {
            j++;
        }
    }
    cout << k << '\n';
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