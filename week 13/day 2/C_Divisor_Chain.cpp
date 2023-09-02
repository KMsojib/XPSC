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
        int now=1;
        vector<int>a;
        while(now<=n){
            a.push_back(now);
            now*=2;
        }
        if(n!=a.back()){
                int dis=n-a.back();
            for(int i=30;i>=0;i--){
                if(dis&(1<<i)){
                    a.push_back(a.back()+(1<<i));
                }
            }
        }
        reverse(a.begin(),a.end());
        cout<<a.size()<<endl;
        for(auto musu : a){
            cout<<musu<<" ";
        }
        cout<<endl;
    }
    return 0;
}
