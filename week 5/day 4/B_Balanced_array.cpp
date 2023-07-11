#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    if(n%4!=0){
        cout<<"NO"<<endl;
        return;
    }
    vector<int>ans;
    int ev_s=0,od_s=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            ans.push_back(i);
            ev_s+=i;
        }
    }
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            ans.push_back(i);
            od_s+=i;
        }
    }
    int dif=ev_s-od_s;
    int x=ans.back();
    ans.back()=x+dif;
    cout<<"YES"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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