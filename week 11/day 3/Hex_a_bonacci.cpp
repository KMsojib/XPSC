
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
#define mod 10000007
ll a, b, c, d, e, f;

int main()
{
    fast_io;
    ll tt,n;  cin>>tt;
    for (int t = 1; t <= tt; ++t) {
        vector<ll>a(10009);
        for(int i=0;i<=5;i++){
            cin>>a[i];
        }
        cin>>n;
        for(int i=6;i<=n;i++){
            a[i]=(a[i-1]+a[i-2]+a[i-3]+a[i-4]+a[i-5]+a[i-6])%mod;
        }
        cout<<"Case "<<t<<": "<<a[n]%mod<<endl;
    }

    return 0;
}
/* check constraints
    * at first try a brute force way to solve
    * then optimization
 
    *  if its array:
        1. try greedy
        2. if it is a result of subproblems try dp
        3. if it is showing for  a range minimum or maximum
        3. 1 tttttffffff
     else
       3.2 ffffftttttt
        try binary search
*/
