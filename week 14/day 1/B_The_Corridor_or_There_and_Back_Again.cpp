#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while (t--){
        int n;  cin>>n;
        vector<pair<int,int>>pp;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            pp.push_back({x,y});
        }
        int ans=INT_MAX;
        for(auto [a,b] : pp){
            int crn=a+(b+1)/2-1;
            ans=min(ans,crn);
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}