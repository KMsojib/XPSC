#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll l,r; cin>>l>>r;
    ll max_dif=0,ans=l;
    for(int i=l;i<=r;i++){
        string s=to_string(i);
        sort(s.begin(),s.end());
        ll crn=s[s.size()-1]-s[0];
        if(crn>max_dif){
            max_dif=crn;
            ans=i;
        }
        if(max_dif==9){
            break;
        }
    }
    cout<<ans<<endl;
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