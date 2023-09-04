#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n,k;    cin>>n>>k;
        k=n%k+1;
        vector<ll>a(n);
        vector<bool>vis(n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            vis[a[i]]=1;
        }
        ll nai=-1;
        for(ll i=0;i<=n;i++){
            if(vis[i]==0){
                nai=i;
            }
        }

        deque<ll>dq(a.begin(),a.end());
        for(ll i=0;i<k;i++){
            ll val=nai;
            dq.push_front(val);
            nai=dq.back();
            dq.pop_back();
        }

        for(ll i=0;i<dq.size();i++){
            cout<<dq[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
