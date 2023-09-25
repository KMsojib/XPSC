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
        int n,m;
        cin>>n>>m;

        vector<int>a(n),b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int j=0;j<m;j++){
            cin>>b[j];
        }

        ll xorr=0;
        for(int i=0;i<n;i++){
            xorr=xorr^a[i];
        }
        ll orr=0;
        for(int i=0;i<m;i++){
            orr=orr|b[i];
        }

        ll xorr2=0;
        for(int i=0;i<n;i++){
            xorr2^=(a[i]|orr);
        }
        cout<<min(xorr,xorr2)<<" "<<max(xorr,xorr2)<<endl;
    }

    return 0;
}
