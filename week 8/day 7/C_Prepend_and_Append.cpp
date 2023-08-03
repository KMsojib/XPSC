/*
    Creator:
    Name: MD.Kawsar Mahmud
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(;t--;)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        int ans=n;
        int l=0,r=n-1;
        while(l<r && s[l]!=s[r])
        {
                l++;
                r--;
                ans=ans-2;
        }
        cout<<ans<<endl;
    }

    return 0;
}