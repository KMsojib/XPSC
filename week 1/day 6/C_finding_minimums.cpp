#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin>>n>>k;
    
    bool f=true;
    int M=INT_MAX,cn=0;
    vector<int>ans;

    for(int i=1;i<=n;i++){
        int val;    cin>>val;
        if(f){
            M=val;
            f=false;
        }
        else{
            // M=min(M,val);
            if(val<M){
                M=val;
            }
        }
        cn++;
        if(cn==k || i==n){
        ans.push_back(M);
        cn=0;
        f=true;
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}