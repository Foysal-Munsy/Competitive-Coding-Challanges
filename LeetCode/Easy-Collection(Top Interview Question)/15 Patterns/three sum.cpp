//
// Created by Foysal Munsy on 05 / 11 / 2024
// Time: 21 : 40 : 55
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
    getline(cin, s);
    string a = "";
    vector<string> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            st.push_back(a);
            a = "";
        }
        else
        {
            a += s[i];
        }
    }
    if (!a.empty())
    {
        st.push_back(a);
    }
    //     cout << st.size() << nl;
    //     The last character of a word is equal to the first character of the next word.
    // The last character of the last word is equal to the first character of the first word.

    if (st.size() == 1)
    {
        a = st[0];
        if (a[0] == a[a.size() - 1])
            cout << a[0] << a[a.size() - 1];
        else
            cout << "false\n";
        return;
    }
    // last char of last word
    string last_word = st[st.size() - 1], first_word = st[0];
    if (last_word[last_word.size() - 1] != first_word[0])
    {
        cout << "false\n";
        return;
    }

    for (int i = 0; i < st.size() - 1; i++)
    {
        string b = st[i], c = st[i + 1];
        if (c[0] != b[b.size() - 1])
        {
            cout << "False\n";
            return;
        }
    }
    cout << "True\n";
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