//
// Created by Foysal Munsy on 09 / 11 / 2024
// Time: 21 : 59 : 54
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
    long long n, x;
    cin >> n >> x;
    vector<int> a;
    long long i = x, y = x;
    for (long long i = 0; i < n - 1; i++)
    {
        y = (y + 1) | x;
    }
    // for (auto i : a)
    //     cout << i << " ";
    cout << y << '\n';
}

signed main()
{
    solve();
    return 0;
}