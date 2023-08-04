/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    read(n);
    map<int,ll>mp;
    in_range(0,n){
        int l,r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    ll sum=0;
    bool ok=true;
    for(auto[it,val] : mp){
        sum+=val;
        if(sum>2){
            ok=false;
            break;
        }
    }
    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}