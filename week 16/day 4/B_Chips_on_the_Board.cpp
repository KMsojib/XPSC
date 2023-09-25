/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        read(n);
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)    cin>>a[i];
        for(int j=0;j<n;j++)    cin>>b[j];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        ll x=a[0],y=b[0];
            ll sum1=0;
            for(int i=0;i<n;i++){
                a[i]+=y;
            }
            sum1=accumulate(a.begin(),a.end(),sum1);
            ll sum2=0;
            for(int i=0;i<n;i++){
                b[i]+=x;
            }
            sum2=accumulate(b.begin(),b.end(),sum2);
            
        cout<<min(sum1,sum2)<<endl;
    }

    return 0;
}