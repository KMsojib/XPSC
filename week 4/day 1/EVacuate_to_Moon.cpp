#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--)
    {
        long long n,m,h;
        cin>>n>>m>>h;
        vector<long long>v(n);
        vector<long long>v2(m);
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
       
        for(int i=0;i<m;i++){
            cin>>v2[i];
        }
        sort(v2.begin(), v2.end(), greater<int>());
        long long ans=0;
        for(long long i=0;i<min(m,n);i++){
            ans+=min(v[i],h*v2[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}