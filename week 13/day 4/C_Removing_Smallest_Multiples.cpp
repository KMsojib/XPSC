#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        string s;   cin>>s;
        s="a"+s;// for 1 base indexing
        vector<int>visited(n+1,0);
        for(int i=1;i<=n;i++){
            if(s[i]=='1'){
                visited[i]=2;
            }
        }

        ll ans=0;
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                if(visited[j]==0){
                    visited[j]=1;
                    ans+=i;
                }
                else if(visited[j]==2){
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
