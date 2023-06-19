#include<bits/stdc++.h>
using namespace std;

#define     in_range(i,x,y)  for(int i=x;i<=y;i++)
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;  cin>>t;
    while(t--)
    {
        int n;  cin>>n;
        map<char,ll>F_ch;
        map<char,ll>S_ch;
        map<string,ll>mp;
        vector<string>a(n);

        in_range(i,0,n-1)
        {
            cin>>a[i];
            F_ch[a[i][0]]++;
            S_ch[a[i][1]]++;
            mp[a[i]]++;
        }

        ll ans=0;
        in_range(i,0,n-1)
        {
            
            ll x=max((ll)0,F_ch[a[i][0]]-mp[a[i]]);
            ans+=x;
            x=max((ll)0,S_ch[a[i][1]]-mp[a[i]]);
            ans+=x;
            if(F_ch[a[i][0]]>0)F_ch[a[i][0]]--;
            if(S_ch[a[i][1]]>0)S_ch[a[i][1]]--;
            if(mp[a[i]]>0)mp[a[i]]--;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}