//
// Created by Foysal Munsy on 24 / 04 / 2024
// Time: 21 : 10 : 12
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
// wrong submission
//  void solve()
//  {
//      ll n, k, mx = -1;
//      cin >> n >> k;
//      vector<ll> a(n);
//      for (ll i = 0; i < n; i++)
//      {
//          cin >> a[i];
//          mx = max(mx, a[i]);
//      }
//      if (n == 1)
//      {
//          cout << a[0] << '\n';
//          return;
//      }
//      // cout << mx << nl;
//      for (ll i = 0; i < n; i++)
//      {
//          if (a[i] == mx)
//              continue;
//          else
//          {
//              //
//              ll d = (mx - a[i]) / k;
//              ll x = (k * d) + a[i];
//              ll y = x + k;
//              ll diff_x = abs(mx - x), diff_y = abs(mx - y);
//              if (diff_x < diff_y)
//                  a[i] = x;
//              else
//                  a[i] = y;
//          }
//      }
//      ll mn = *min_element(all(a)), mxx = *max_element(all(a));
//      cout << mxx - mn << '\n';
//      //     for (auto i : a)
//      //         cout << i << " ";
//      //     cout << nl;
//  }
void run()
{
    ll n, k, mx = -1;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    sort(all(a));
    for (ll i = 0; i < n - 1; i++)
    {
        ll t = (mx - a[i]) / k;
        a[i] = a[i] + (t * k);
    }
    ll mn = a[n - 1];
    for (ll i = 0; i < n; i++)
    {
        mn = min(mn, a[i]);
    }
    ll ans = mx - mn;
    sort(all(a));
    mx = a[n - 1];
    for (ll i = 0; i < n; i++)
    {
        ans = min(ans, mx - a[i]);
        mx = max(mx, a[i] + k);
    }
    cout << ans << '\n';
    // for (auto i : a)
    //     cout << i << " ";
    // cout << nl;
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
        run();
        cs++;
    }
    return 0;
}