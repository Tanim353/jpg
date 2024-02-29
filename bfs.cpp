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

using namespace std;
vector<ll> v[1000];
ll visit[1000];

ll d[1000] = {0};

ll pre[1000] = {0};

ll n, l;

void ss(int a)
{
    if (pre[a] == 0)
    {
        cout << pre[a] << " ";
    }
    else
    {
        ss(a - 1);
        cout << pre[a] << " ";
    }
}
void bfs(ll x)
{
    queue<ll> q;
    q.push(x);
    visit[x] = 1;
    while (!q.empty())
    {
        ll current = q.front();
        cout << current << " ";
        q.pop();
        for (ll i = 0; i < v[current].size(); i++)
        {
            ll next = v[current][i];
            if (visit[next] == 0)
            {
                visit[next] = 1;
                d[next] = d[current] + 1;
                pre[next] = current;
                q.push(next);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> l;
    for (ll i = 0; i < l; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[x].pb(y);
    }
    bfs(0);
    cout << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << i << " Weight: " << d[i] << " Path: " << endl;
        ss(i);
        cout << i << endl;
    }

    return 0;
}
