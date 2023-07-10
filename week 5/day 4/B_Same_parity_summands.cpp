#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(;t--;)
    {
        int n,k;
        cin>>n>>k;
        
        //for odd check
        int odd=n-(k-1);
        if(odd>0 && odd%2 == 1)
        {
            cout<<"YES"<<"\n";
            for(int i=0;i<k-1;i++)
            {
                cout<<"1"<<" ";
            }
            cout<<odd<<"\n";
            continue;
        }
        
        //for EVEN
        int eve=n-2*(k-1);
        if(eve>0 && eve%2 == 0)
        {
            cout<<"YES"<<"\n";
            for(int i=0;i<k-1;i++)
            {
                cout<<"2"<<" ";
            }
            cout<<eve<<"\n";
            continue;
        }
        cout<<"NO"<<"\n";
    }
    return 0;
}