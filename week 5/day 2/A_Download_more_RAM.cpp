#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;    cin>>n>>k;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)    cin>>b[i];

    // sort(a.begin(),a.end());
    // sort(b.begin(),b.end());
    // for(int i=0;i<n;i++){
    //     if(a[i]<=k){
    //         k+=b[i];
    //     }
    //     else{
    //         break;
    //     }
    // }
    // cout<<k<<endl;

    vector<pair<int,int>>p;
    for(int i=0;i<n;i++){
        p.push_back({a[i],b[i]});
    }
    sort(p.begin(),p.end());
    // for(auto it : p){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    for(int i=0;i<n;i++){
        if(p[i].first<=k){
            k+=p[i].second;
        }
        else{
            break;
        }
    }
    cout<<k<<endl;
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