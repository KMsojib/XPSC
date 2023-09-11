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
        vector<int>a(n);
        in_range(0,n){
            cin>>a[i];
        }
        int mn=-1,mx=-1;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                if(mn==-1){
                    mn=i;
                }
                mx=i;
            }
        }
        if(mn==mx){
            cout<<"0\n";
        }
        else{
            cout<<max(1,mx-mn-1)<<endl;
        }
    }

    return 0;
}
