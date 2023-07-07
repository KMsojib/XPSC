#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tt;
    cin>>tt;

    while(tt--)
    {
        int n;cin>>n;
        vector<int>a(n);
        
        for(int i=0;i<n;i++)  cin>>a[i];

        vector<int>ans=a;
        sort(a.begin(),a.end());
        int ind=0;
        for(int i=0;i<n;i++){
            if(ans[i]!=a[1]){
                ind=i;
                break;
            }
        }
        cout<<ind+1<<endl;
    }
    return 0;
}