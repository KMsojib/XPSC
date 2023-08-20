#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            a[i]=i+1;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            vector<int>t=a;
            reverse(t.begin()+i,t.end());
            int crn=0;
            int maxi=0;
            for(int j=0;j<n;j++){
                crn+=t[j]*(j+1);
                maxi=max(maxi,t[j]*(j+1));
            }
            ans=max(ans,crn-maxi);
        }
        cout<<ans<<endl;
    }

    return 0;
}
 