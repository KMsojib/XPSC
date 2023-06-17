#include<bits/stdc++.h>
using namespace std;

int diff(string a,string b)
{
    int val=0;
    for(int i=0;i<a.size();i++){
        val+=abs(a[i]-b[i]);
    }
    return val;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<i<<" :"<<a[i]<<endl;
        // }
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                ans=min(ans,diff(a[i],a[j]));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}