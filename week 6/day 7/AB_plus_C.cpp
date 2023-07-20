#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll x;   cin>>x;
    ll lim=1e6;
    if(x==1){
        cout<<-1<<endl;
    }
    else{
        if(x<=lim){
            cout<<1<<" "<<(x-1)<<" "<<1<<endl;
        }
        else{
            ll a=lim;
            ll b=(x/a);
            ll c=(x%a);
            if(c==0ll){
                cout<<a<<" "<<(b-1)<<" "<<lim<<endl;
            }else{
                cout<<a<<" "<<b<<" "<<c<<endl;
            }
        }
    }
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