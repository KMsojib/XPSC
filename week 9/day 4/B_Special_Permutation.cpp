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
        int n,a,b; cin>>n>>a>>b;
        ll m=(n/2)-1;

        ll l=0,r=0;
        if(b>a){
            l=n-a-1;
            r=b-2;
        }
        else{
            l=n-a;
            r=b-1;
        }

        if(l<m or r<m){
            cout<<-1<<endl;
            continue;
        }
        ll ans[n];
        ans[0]=a;
        ans[n-1]=b;
        int j=n;
        in_range(1,n-1){
            if(j==a or j==b){
                j--;
            }
            if(j==a or j==b){
                j--;
            }
            ans[i]=j;
            j--;
        }
        in_range(0,n){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}