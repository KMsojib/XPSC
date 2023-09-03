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
        string a,b;
        cin>>a;
        cin>>b;
        bool f=false;
        for(int i=1;i<a.size();i++){
            if(a[i]=='1' && a[i-1]=='0'){
                if(b[i]=='1' && b[i-1]=='0'){
                    f=true;
                    break;
                }
            }
            if(f){
                break;
            }
        }
        if(f){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}