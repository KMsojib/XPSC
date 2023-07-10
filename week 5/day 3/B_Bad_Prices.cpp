#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    int n;  cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cn=0;
    int Min=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i]>Min){
            cn++;
        }
        Min=min(a[i],Min);
    }
    cout<<cn<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(a[j]<a[i]){
    //             cn++;
    //             break;
    //         }
    //     }
    // }
    // cout<<cn<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}