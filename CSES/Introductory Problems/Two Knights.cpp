//Problem link: https://cses.fi/problemset/task/1072

//
// Created by Foysal Munsy on 23 / 04 / 2024
// Time: 12 : 46 : 51
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
    long long n;
    cin >> n;
    // i should use Nc2 formula for how many total attacks available for the two knights.
    // Total attacks = Nc2 --> n^2(n^2 - 1) /2
    // we should consider 2 * 3 grid for horizontally and 3 * 2 for vertically
    // and each grid have two possible attacking position. so vertically =2 and horizontally =2 . Tot possible attacks in grid = 4;
    // horizontal possible move = (n-1) , vertical possible move = (n-2)
 
    for (long long i = 1; i <= n; i++)
    {
        long long total_available_attacks = (i * i) * ((i * i) - 1) / 2;
        long long tot_possible_attacks = 4 * (i - 1) * (i - 2);
        long long ans = total_available_attacks - tot_possible_attacks;
        cout << ans << '\n';
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

