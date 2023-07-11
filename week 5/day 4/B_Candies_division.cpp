
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;    cin>>n>>k;
    int full=n-n%k;
    full+=min(n%k,k/2);
    cout<<full<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);   
    int t;  cin>>t;
    while(t--){
        solve();
    }
}