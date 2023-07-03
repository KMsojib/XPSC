#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while (t--)
    {
        /* code */
        long long n,H,M;  cin>>n>>H>>M;
        long long time=60*H+M;
        long long ans=24*60;

        for(int i=0;i<n;i++)
        {
            long long hi,mi;    cin>>hi>>mi;
            long long t=60*hi+mi-time;
            if(t<0){
                t+=24*60;
            }
            ans=min(ans,t);
        }
        cout<<ans/60<<" "<<ans%60<<endl;

    }
    
    return 0;
}