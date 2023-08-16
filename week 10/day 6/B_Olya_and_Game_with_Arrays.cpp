#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while (t--)
    {
        ll n;  cin>>n;
        vector<ll>a;
        ll sum=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int m;  cin>>m;
            vector<ll>v1(m);
            for(int j=0;j<m;j++){
                cin>>v1[j];
            }
            sort(v1.begin(),v1.end());
            if(m==1){
                sum+=v1[0];
            }
            else{
                int l=v1[0];
                a.push_back(v1[1]);
                mini=min(mini,l);
            }
        }
        sum+=mini;
        sort(a.begin(),a.end());
        for(int i=1;i<a.size();i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    
    return 0;
}