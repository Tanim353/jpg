#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ff first
#define sc second
#define mp make_pair
#define pb push_back
#define pp pop_back
#define nn "\n"

void solve()
{
    ll a;
    cin >> a;
    vector<ll> m(a), n(a);
    vector<pair<ll, ll>> v;
    for (int i = 0; i < a; i++)
    {
        cin >> m[i];
    }
    for (int i = 0; i < a; i++)
    {
        cin >> n[i];
        v.pb({n[i], m[i]});
    }
    sort(v.begin(), v.end());
    ll k = 1, p = v[0].ff;
    for (auto it = v.begin() + 1; it != v.end(); it++)
    {
        if (it->sc > p) 
        {
            k++;
            p = max(p, it->ff);
        }
    }
    cout << k << nn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
