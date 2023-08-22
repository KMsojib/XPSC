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
        int n;  cin>>n;
        vector<int>a;
        a.push_back(1);//all permutation start 1 intest case :)
        map<ll,ll>vis;
        vis[1]=1;
        for(int i=2;i<=n;i++){
            if(vis[i] == 1){
                continue;
            }
            int per=i;
            while(per<=n){
                if(vis[per]!=1){
                    a.push_back(per);
                    vis[per]=1;
                    per*=2;
                }
            }
        }
        for(auto it : a){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    return 0;
}