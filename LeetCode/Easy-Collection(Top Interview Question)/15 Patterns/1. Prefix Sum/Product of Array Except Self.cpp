//
// Created by Foysal Munsy on 25 / 10 / 2024
// Time: 23 : 01 : 29
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
int n;
vector<int> nums;
void solve()
{
    cin >> n;
    nums.resize(n, 0);
    for (auto &i : nums)
        cin >> i;

    vector<int> pref(n + 1, 1), suff(n + 1, 1);
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] * nums[i];
        suff[i + 1] = suff[i] * nums[n - i - 1];
    }
    pref.pop_back();
    suff.pop_back();
    vector<int> result(n);
    for (int i = 0; i < n; i++)
    {
        result[i] = pref[i] * suff[n - 1 - i];
    }
    debug(nums, pref, suff, result);
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