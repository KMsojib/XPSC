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
        long long l,r;    cin>>l>>r;
        long long mx=0,mi=0;
        mx=max(l,r);
        mi=min(l,r);
        mi--;
        long long res1=mi*(mi+1)/2;
        long long res2=mx*(mx+1)/2;
        cout<<res2-res1<<endl;
        
    }
    return 0;
}