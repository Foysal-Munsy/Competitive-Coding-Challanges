//
// Created by Foysal Munsy on 28 / 10 / 2024
// Time: 21 : 13 : 24
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

// bool checkSubarraySum(vector<int> &nums, int k)
// {

// }
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (auto &i : nums)
        cin >> i;

    int pref_sum = 0;
    unordered_map<int, int> mp;
    mp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        pref_sum = (pref_sum + nums[i]) % k;
        if (mp.find(pref_sum) != mp.end())
        {
            if ((i + 1) - mp[pref_sum] >= 2)
            {
                // cout << "YES\n";

                continue;
                // return;
            }
        }
        else
        {
            mp[pref_sum] = i + 1;
        }
    }
    // cout << "NO\n"

    // debug(pref, mp);
    for (const auto &pair : mp)
    {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
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