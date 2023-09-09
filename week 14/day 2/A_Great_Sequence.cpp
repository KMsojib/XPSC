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
        int n,x;
        cin>>n>>x;
        vector<ll>a(n+1);
        map<ll,int>mp;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a.begin()+1,a.end());
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(mp[a[i]] == 0)
            {
                continue;
            }
            if(mp[a[i]*x]!=0)
            {
                //if a[i]*x is here then we don't need to add any element
                //so just we decrease the count
                mp[a[i]]--;
                mp[a[i]*x]--;
            }
            else
            {//we need to add element so update the ans & decrease the count
            //of a[i]
                ans++;
                mp[a[i]]--;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}
