//
// Created by Foysal Munsy on 24 / 10 / 2024
// Time: 18 : 56 : 03
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            a[i] = -1;
    }
    vector<int> pref(n + 1, 0);
    partial_sum(all(a), pref.begin() + 1);
    // for (int i = 0; i <= n; i++)
    //     cout << sum << " ";
    // cout << endl; // To ensure the output is clean
    int max_len = 0;
    unordered_map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int sum = pref[i];
        if (sum == 0)
        {
            max_len = i;
        }

        if (mp.find(sum) != mp.end())
        {
            int val = i - mp[sum];
            max_len = max(max_len, val);
        }
        else
        {
            mp[sum] = i;
        }
    }
    cout << max_len;
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