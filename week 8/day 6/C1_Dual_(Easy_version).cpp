/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

 #include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
const int N=1000;
int a[N];

void solve()
{
    int n;  cin>>n;
    vector<pair<int,int>>pi;
    int mx=1,mi=1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[mi]>a[i]){
            mi=i;
        }
        if(a[mx]<a[i]){
            mx=i;
        }
    }
    if(a[mx]>-a[mi]){
        for(int i=1;i<=n;i++){
            pi.push_back({i,mx});
        }
        for(int i=2;i<=n;i++){
            pi.push_back({i,i-1});
        }
    }
    else{
        for(int i=1;i<=n;i++){
            pi.push_back({i,mi});
        }
        for(int i=n;i>=2;i--){
            pi.push_back({i-1,i});
        }
    }
    cout<<pi.size()<<endl;
    for(int it =0;it<pi.size();it++){
        cout<<pi[it].first<<' '<<pi[it].second<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}