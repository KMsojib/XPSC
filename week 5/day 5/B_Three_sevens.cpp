#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while (t--)
    {
        /* code */
        int n;  cin>>n;
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            int m;  cin>>m;
            for(int j=1;j<=m;j++){
                int x;  cin>>x;
                mp[x]=i;
            }
        }
        vector<int>ans(n+1,-1);
        for(auto [v,last] : mp){
            if(ans[last]==-1){
                ans[last]=v;
            }
        }
        bool flag=true;
        for(int i=1;i<=n;i++){
            if(ans[i]==-1){
                flag=false;
                break;
            }
        }
        if(flag==false){
            cout<<-1<<endl;
            continue;
        }
        else{
            for(int i=1;i<=n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}