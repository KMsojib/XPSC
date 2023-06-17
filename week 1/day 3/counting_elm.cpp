#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int a[n],hash[1002];
    memset(hash,0, sizeof(hash));
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        hash[a[i]]++;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        //cout<<hash[a[i]+1]<<" ";
        if(hash[a[i]+1]!=0){
            ans++;
            //cout<<hash[a[i]+1]<<endl;
        }
    }
    cout<<ans<<endl;
    return 0;
}