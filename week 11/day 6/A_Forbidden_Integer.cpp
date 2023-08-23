#include<bits/stdc++.h>
using namespace std;

void solve()
{
        int n,k,x;  cin>>n>>k>>x;
        if(k==1)
        {
            cout<<"NO"<<endl;
            return;
        }
        if(x!=1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(long long i=0;i<n;i++)
            {
                cout<<"1"<<" ";
            }
            cout<<endl;
            return;
        }
        //n is odd and k==2;
        if(n%2 and k==2)
        {
            cout<<"NO\n";
            return;
        }
        //n is even
        if(n%2==0)
        {
            cout<<"YES"<<endl;
            cout<<(n/2)<<endl;
            for(long long i=0;i<(n/2);i++)
            {
                cout<<2<<" ";
            }
            cout<<endl;
            return;
        }
        long long tot=(n/2);
        cout<<"YES"<<endl;
        cout<<tot<<endl;
        for(long long i=0;i<(n/2-1);i++){
            cout<<"2"<<" ";
        }
        cout<<"3";
        return;
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