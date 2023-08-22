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
        int a,b,c;
        cin>>a>>b>>c;
        int ans=c/2;
        a+=c-ans;
        b=b+ans;
        if(a>b){
            cout<<"First\n";
        }
        else{
            cout<<"Second\n";
        }
    }

    return 0;
}