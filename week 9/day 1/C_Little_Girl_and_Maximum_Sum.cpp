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
const int N=200010;
ll a[N],prf[N];
int main()
{
    fast_io;
        read(n);
        read(q);
        
        in_range(0,n){
            cin>>a[i];
        }
        sort(a,a+n);
        in_range(0,q){
            int l,r;    cin>>l>>r;
            prf[l-1]++;
            prf[r]--;
        }
        in_range(1,n){
            prf[i]+=prf[i-1];
        }
        sort(prf,prf+n);

        ll res=0;
        in_range(0,n){
            res+=a[i]*prf[i];
        }
        cout<<res<<endl;

    return 0;
}