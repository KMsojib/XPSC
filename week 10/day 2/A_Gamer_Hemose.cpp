#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sz(yo) (ll)yo.size()

void solve()
{
    ll n, ans = 1, MOD = 1e9 + 7;
    cin >> n;
    n = 2 * n;
    for (ll i = 3;i <= n;i++)
    {
        ans *= i;
        ans %= MOD;
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}