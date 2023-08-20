#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while (t--)
    {
        int n;  cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++)    cin>>a[i];
        bool f=false;
        for(int i=0;i<n-1;i++){
            ll x=0;
            for(int j=0;j<=i;j++){
                x=x xor a[j];
            }
            int flag1=0;
            int temp=0;
            for(int k=i+1;k<n;k++){
                temp=temp xor a[k];
                if(temp == x){
                    flag1=1;
                    temp=0;
                }
            }
            if(temp == 0 && flag1){
                YES;
                f=true;
                break;
            }
        }
        if(!f){
            NO;
        }
    }
    return 0;
}
