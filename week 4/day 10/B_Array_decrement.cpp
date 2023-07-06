#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int dif=0,ans=0;

        for(int i=0; i<n; i++)
        {
            if(a[i]>=b[i])
            {
                dif=max(dif,a[i]-b[i]);
            }
            else
            {
                ans=1;
                break;
            }
        }
        if(ans==1)
        {
            cout<<"NO"<<endl;
        }

        else
        {
            ans=1;
            for(int i=0; i<n; i++)
            {
                int dis=a[i]-b[i];
                if(b[i]!=0 && dif>dis)
                {
                    ans=0;
                    break;
                }
            }
            if(ans==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}