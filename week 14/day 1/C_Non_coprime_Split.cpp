#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    for(int i=2;i*i<=b;i++){
        if(b%i==0){
            int x,y;
            x=i;
            y=b-i;
            cout<<x<<" "<<y<<endl;
            return;
        }
    }//b is odd then b-1 is even
    if(a!=b && b-3>0){
        cout<<2<<" "<<b-3<<endl;
    }
    else{
        cout<<"-1\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while (t--){
        solve();
    }
    
    return 0;
}