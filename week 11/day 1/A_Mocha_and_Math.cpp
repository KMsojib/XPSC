#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
#define pb push_back
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)    cin>>a[i];
        int temp=a[0];
        for(int i=1;i<n;i++){
            temp=(temp & a[i]);
        }
        cout<<temp<<endl;
    }

    return 0;
}