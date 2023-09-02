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
        int n,k;    cin>>n>>k;
        string s;   cin>>s;
        vector<char>od,ev;
        for(int i=0;i<n;i++){
            if(i%2!=0){
                od.push_back(s[i]);
            }
            else{
                ev.push_back(s[i]);
            }
        }
        string ans="";
        sort(ev.begin(),ev.end());
        sort(od.begin(),od.end());
        for(int i=0,j=0;i<ev.size() || j<od.size();i++,j++){
            if(i<ev.size()){
                ans+=ev[i];
            }
            if(j<od.size()){
                ans+=od[i];
            }
        }
        if(k%2==0){
            sort(s.begin(),s.end());
            cout<<s<<"\n";
            continue;
        }
        cout<<ans<<endl;
    }

    return 0;
}
