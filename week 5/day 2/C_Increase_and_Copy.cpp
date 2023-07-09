#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while (t--)
    {
        /* code */
        ll n;   cin>>n;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        ll val=0;
        ll MIN=INT_MAX;
        for(int i=2;i<50000;i++){
            if(n%i==0){
                val=(n/i)-1+(i-1);
            }else{
                val=n/i+(i-1);
            }
            MIN=min(MIN,val);
        }
        cout<<MIN<<endl;
        
    }
    
    return 0;
}