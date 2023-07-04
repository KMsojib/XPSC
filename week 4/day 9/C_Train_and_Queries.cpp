#include<bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    int n,k;
    cin>>n>>k;
    map<int,vector<int>>mp;
    for(int i=1;i<=n;i++){
        int j;  cin>>j;
        mp[j].push_back(i);
    }
    for(int i=0;i<k;i++)
    {
        int a,b;    cin>>a>>b;
        if(!mp.count(a) || !mp.count(b))
        {
            cout<<"NO"<<endl;
            continue;
        }
        int idx=mp[a][0];
        if(upper_bound(mp[b].begin(),mp[b].end(),idx)==mp[b].end()){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t;  cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}