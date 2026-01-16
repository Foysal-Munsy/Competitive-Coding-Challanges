//
// Created by Foysal Munsy on 15 / 01 / 2026
// Time: 17 : 37 : 53
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
// Ferris Wheel - https://cses.fi/problemset/task/1090
void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (auto &v : arr)
        cin >> v;
    sort(arr.begin(), arr.end());
    int i = 0, j = n - 1, cnt = 0;
    while (i <= j)
    {
        if (arr[i] + arr[j] <= x)
        {
            cnt++, i++, j--;
        }
        else
            cnt++, j--;
    }
    cout << cnt << '\n';
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