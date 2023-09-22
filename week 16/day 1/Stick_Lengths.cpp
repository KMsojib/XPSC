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
    vector<int>a(n);

    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll mid=n/2;
    for(int i=0;i<n;i++){
        ans+=abs(a[i]-a[mid]);
    }
    cout<<ans<<"\n";

    return 0;
}
