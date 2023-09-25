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
        read(n);
        vector<pair<int,int>>pp;
        for(int i=0;i<n;i++){
            ll x,y;
            cin>>x>>y;
            pp.push_back({x,y});
        }
        ll s=pp[0].first;
        ll e=pp[0].second;

        bool f=true;
        for(int i=1;i<n;i++){
            if(pp[i].first>=s && pp[i].second>=e){
                f=false;
                break;
            }
        }

        if(f){
            cout<<s<<endl;
        }else{
            cout<<-1<<endl;
        }
    }

    return 0;
}