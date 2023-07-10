#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;  cin>>n;
    ll sum=0;
    for(ll i=0;i<n;i++){
        ll x;   cin>>x;
        sum+=x;
    }
    if(sum%n==0){
        cout<<sum/n<<endl;
    }else{
        cout<<(sum/n)+1<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;  cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}