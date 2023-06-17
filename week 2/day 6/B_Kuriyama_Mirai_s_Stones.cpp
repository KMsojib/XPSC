#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;   cin>>n;
    ll a[n+2], pr1[n+2],pr2[n+2],b[n+3];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
    }

    pr1[0]=0;
    for(int i=1;i<=n;i++){
        pr1[i]=pr1[i-1]+a[i];
    }

    
    sort(b+1,b+n+1);
    pr2[0]=0;
    for(int i=1;i<=n;i++){
        pr2[i]=pr2[i-1]+b[i];
    }
    int q;  cin>>q;
    while(q--)
    {
        int k,l,r;
        cin>>k>>l>>r;
        if(k==1){
            cout<<pr1[r]-pr1[l-1]<<endl;
        }
        else{
            cout<<pr2[r]-pr2[l-1]<<endl;
        }
    }
    return 0;
}