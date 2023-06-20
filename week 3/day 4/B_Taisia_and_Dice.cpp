#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int test;   cin>>test;
    while(test--)
    {
        ll n,s,r;
        cin>>n>>s>>r;

        ll val=s-r;
        cout<<val<<" ";

        for(int i=2;i<=n;i++)
        {
            while(r-val<n-i)
            {
                val--;
            }
            cout<<val<<" ";
            r=r-val;
        }
        cout<<endl;
    }

    return 0;
}