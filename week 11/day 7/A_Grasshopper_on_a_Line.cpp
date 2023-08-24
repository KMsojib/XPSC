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
        int x,k;    cin>>x>>k;
        int n=0;
        if(x%k==0){
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        }else{
            cout<<1<<endl;
            cout<<x<<endl;
        }

    }

    return 0;
}