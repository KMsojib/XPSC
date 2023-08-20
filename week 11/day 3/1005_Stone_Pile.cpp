#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl cout<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;  cin>>n;
    vector<int>a(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    ll ans=INT_MAX;
    for(int m=0;m<(1<<n);m++){
        ll sub_sum=0;
        for(int i=0;i<n;i++){
            if(m&(1<<i)){
                sub_sum+=a[i];
            }
        }
        ll temp=abs(2*sub_sum-sum);
        ans=min(temp,ans);
    }
    cout<<ans<<endl;
    return 0;
}