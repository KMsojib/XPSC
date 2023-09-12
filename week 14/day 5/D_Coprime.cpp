#include<bits/stdc++.h>
using namespace std;

int gcd(int i,int j)
{
    if(i%j==0){
        return j;
    }
    else{
        return gcd(j,i%j);
    }
}

void solve()
{
    int a[10001];
    for(int i=0;i<=1000;i++){
        a[i]=-1;
    }
    int ans=-1;
    int n;  cin>>n;
    for(int i=1;i<=n;i++){
        int j;  cin>>j;
        a[j]=i;
    }
    for(int i=1;i<=1000;i++){
        for(int j=i;j<=1000;j++){
            if(a[i]>0 and a[j]>0){
                if(gcd(i,j)==1){
                    ans=max(ans,a[i]+a[j]);
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);   

    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}