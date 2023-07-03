#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;   cin>>test;
    while (test--)
    {
        /* code */
        int n;  cin>>n;
        string a;   cin>>a;
        string ans="";
        long long val=0;
        for(int i=n-1;i>=0;)
        {
            if(a[i]=='0')
            {
                val=(a[i-2]-48)*10+a[i-1]-48;
                i-=3;
            }
            else
            {
                val=a[i]-48;
                i--;
            }
            ans=ans+char(val+97-1);
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    
    return 0;
}