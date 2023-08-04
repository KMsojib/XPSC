/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/
 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
#define in_range(a,b)    for(int i=a;i<b;i++)
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;  cin>>n;
    map<int,ll>mp;
    in_range(0,n){
        int l,r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    ll sum=0,ans=0;
    for(auto [it,val] : mp){
        sum+=val;
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
 
    return 0;
}