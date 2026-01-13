//
// Created by Foysal Munsy on 06 / 11 / 2024
// Time: 22 : 19 : 24
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
    // vector<int> nums(n), bits(n, 0), an;
    // // an.assign(nums.begin(), nums.end());
    int a = __builtin_popcount(nums[j]);
    // for (auto &i : nums)
    //     cin >> i;
    // an = nums;
    // sort(an.begin(), an.end());
    // for (int i = 0; i < n; i++)
    // {
    //     int set_bits = bitset<32>(nums[i]).count();
    //     bits[i] = set_bits;
    // }
    // bool ans = true;

    // int j = 0;
    // while (j < n)
    // {
    //     for (int i = n - 1; i > 0; i--)
    //     {
    //         if (nums[i] < nums[i - 1])
    //         {
    //             if (bits[i] == bits[i - 1])
    //             {
    //                 swap(nums[i], nums[i - 1]);
    //             }
    //             else
    //             {
    //                 ans = false;
    //             }
    //         }
    //     }
    //     j++;
    // }

    // // for (auto &i : nums)
    // //     cout << i << " ";
    // if (an != nums)
    //     ans = false;
    // if (ans)
    // {
    //     cout << "TRUE\n";
    // }
    // else
    // {
    //     cout << "FALSE\n";
    // }
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