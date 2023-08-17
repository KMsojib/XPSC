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
    int t;  cin>>t;
    while(t--){
        ll n,k;    cin>>n>>k;
        ll g=__gcd <long long> (2, k);
        if(n%g){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }

    return 0;
}