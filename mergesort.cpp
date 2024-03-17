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

void mergesort(ll m[], ll l, ll mid, ll r)
{
    ll n1 = mid - l + 1, n2 = r - mid;
    ll LA[n1], RA[n2];
    for (int i = 0; i < n1; i++)
    {
        LA[i] = m[l + i];
    }
    for (int i = 0; i <n2; i++)
    {
        RA[i] = m[mid + i+1];
    }

    ll i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (LA[i] < RA[j])
        {
            m[k] = LA[i];
            i++;
        }
        else
        {
            m[k] = RA[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        m[k] = LA[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        m[k] = RA[j];
        j++;
        k++;
    }
}

void merge(ll m[], ll l, ll r)
{
    if (l < r)
    {
        ll mid = l + (r - l) / 2;

        merge(m, l, mid);
        merge(m, mid + 1, r);
        mergesort(m, l, mid, r);
    }
}

void solve()
{
    ll a;
    cin >> a;
    ll m[a];
    for (int i = 0; i < a; i++)
    cin >> m[i];

    merge(m, 0, a - 1);
    
    for(int p=0; p<a; p++)
    {
        cout << m[p] << " "; 
    }
    cout<<nn;
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
