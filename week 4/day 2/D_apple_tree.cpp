#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> v[200005];
ll leaf[200005];
bool visited[200005];

ll count_leaf(ll src)
{
    visited[src] = true;
    ll ans = 0;
    bool l = true;
    for (ll i = 0; i < v[src].size(); i++)
    {
        if (!visited[v[src][i]])
        {
            l = false;
            ans += count_leaf(v[src][i]);
        }
    }
    if (l)
    {
        return leaf[src] = 1;
    }
    else
        return leaf[src] = ans;
}

void solve()
{
    ll n;
    cin >> n;
    ll e = n - 1;
    memset(visited, false, sizeof(visited));
    memset(leaf, 0, sizeof(leaf));
    while (e--)
    {
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    ll q;
    count_leaf(1);
    cin >> q;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        cout << leaf[x] * leaf[y] << endl;
    }
 
    for (ll i = 1; i <= n; i++)
    {
        v[i].clear();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);   
    int test;   cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}