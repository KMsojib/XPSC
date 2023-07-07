#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;  cin>>t;
    while (t--)
    {
        /* code */
        string s;   cin>>s;
        int cn=0;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='?')cn++;
        }
        if(cn==n){
            cout<<n<<endl;
            continue;
        }
        int z=0,i;
        for( i=0;i<n;i++){
            if(s[i]=='1')z++;
        }
        if(z==0){
            int ans=0;
            for(int i=0;i<n;i++){
                ans++;
                if(s[i]=='0'){
                    break;
                }
            }
            cout<<ans<<endl;
            continue;
        }
        int zero=-1,ans=0;
        for( i=n;i>=0;i--){
            if(s[i]=='0'){
                zero=i;
            }
            else{
                if(s[i]=='1'){
                    if(zero==-1){
                        ans=n-i;
                        break;
                    }
                    else{
                        ans=zero-i+1;
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}