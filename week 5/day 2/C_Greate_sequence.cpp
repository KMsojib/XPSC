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
        /* code */
        ll n,x;   cin>>n>>x;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll ans=0;
        for(ll i=0;i<n;i++){
            if(a[i]!=-1){
                ll target=x*a[i];
                ll low=i+1;
                ll hig=n-1;
                int found=-1;
                while (low<=hig)
                {
                    /* code */
                    ll mid=low+(hig-low)/2;
                    if(a[mid]==target){
                        found=mid;
                        hig=mid-1;
                    }
                    if(a[mid]<target){
                        low=mid+1;
                    }
                    else{
                        hig=mid-1;
                    }
                }
                if(found==-1){
                    ans++;
                }else{
                    a[found]=-1;
                }
                
            }
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}