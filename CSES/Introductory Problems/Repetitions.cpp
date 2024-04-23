//Problem link: https://cses.fi/problemset/task/1069

// Created by Foysal Munsy on 21 / 02 / 2024
// Time: 18 : 05 : 29
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
    string s;
    cin >> s;
    int long_rep = 0, rep = 1;
    char c = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            rep++;
        }
        else
        {
            long_rep = max(long_rep, rep);
            c = s[i];
            rep = 1;
        }
    }
    long_rep = max(long_rep, rep);
    cout << long_rep << '\n';
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

