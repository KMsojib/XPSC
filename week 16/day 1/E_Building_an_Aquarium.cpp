/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        long long n,x;
        //scanf("%lld,%lld",&n,&x);
        cin>>n>>x;

        vector<long long>a(n);
        for(int i=0; i<n; i++){
            //scanf("%lld",&a[i]);
            cin >>a[i];
        }

        long long l=1,r=1e10;
        while(l<r-1){
            long long total_wt=0;
            long long mid=l+(r-l)/2;///to avoid overflow
            for(int i=0; i<n; i++){
                if(a[i]<mid){
                    total_wt+=(mid-a[i]);
                }
            }

            if(total_wt>x){
                r=mid;
            }
            else{
                l=mid;
            }
        }
        cout<<l<<"\n";
    }

    return 0;
}
