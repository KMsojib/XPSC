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
        map<ll,vector<ll>>v;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v[x].push_back(i);
        }
        vector<int>ans(n);
        int tmp=n;
        for(auto it : v){
            for(int i=0;i<it.second.size();i++){
                ans[it.second[i]]=tmp;
                tmp--;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}