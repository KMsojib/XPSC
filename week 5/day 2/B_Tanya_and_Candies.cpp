#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;   cin>>n;
    ll sum1=0;
    ll sum0=0;
    ll total_sum=0;
    vector<ll>a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
        total_sum+=a[i];
    }

    for(ll i=1;i<n;i+=2){
        sum1+=a[i];
    }

    ll ans=0;
    for(ll i=0; i<n; i++){
        if(i%2){
            sum1=total_sum-sum0-a[i];
            //cout<<"sum1: "<<sum1<<endl;
        }else{
            sum0=total_sum-sum1-a[i];
            //cout<<"Sum0 : "<<sum0<<endl;
        }
        if(sum1==sum0){
            //cout<<"sum1 == sum0 : "<<sum1<<" "<<sum0<<endl;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}