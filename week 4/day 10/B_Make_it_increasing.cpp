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
        int n;  cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=n-2;i>=0;i--){
            while (a[i]!=0 && a[i]>=a[i+1]){
                /* code */
                a[i]/=2;
                ans++;
            }
            if(a[i]>=a[i+1] or a[i]==0 &&  i>0){
                ans=-1;
                break;
            }
            
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}