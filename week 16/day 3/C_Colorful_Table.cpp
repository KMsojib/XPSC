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
const int N = 1e5+5;
vector<int>all[N];
ll n,k;
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        cin>>n>>k;

        for(int i=0;i<=k;i++){
            all[i].clear();
        }
        vector<int>a(n);
        in_range(0,n){
            cin>>a[i];
            all[a[i]].push_back(i);
        }

        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(i);
        }
        for(int i=1;i<=k;i++){
            if(all[i].empty()){
                cout<<"0 ";
                continue;
            }
            assert(st.size());
            int xmin=*st.begin();
            int xmax=*st.end();
            int ans=(xmax-xmin+1)*2;
            cout<<ans<<" ";

            for(auto it : all[i]){
                st.erase(it);
            }
        }
        cout<<endl;
    }

    return 0;
}
