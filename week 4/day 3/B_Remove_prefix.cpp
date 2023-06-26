#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;cin>>t;
    for(;t--;)
    {
        int n;cin>>n;
        map<int,int>mt;
        int a[n];
        int ans=0;
        int len=n;
 
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mt[a[i]]++;
        }
        int it=0;
        cout<<mt.size()<<endl;
        while(mt.size()!=len)
        {
            ans++;
            mt[a[it]]--;
            /*map empty hoye gele then */
            if(mt[a[it]]==0){
                mt.erase(a[it]);
            }
            it++;
            len--;
        }
        cout<<ans<<endl;
    }
 
    return 0;
}