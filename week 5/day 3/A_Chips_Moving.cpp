#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;  cin>>n;
    ll cn=0;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0){
            cn++;
        }
    }
    cn=min(cn,n-cn);
    cout<<cn<<endl;
    return 0;
}