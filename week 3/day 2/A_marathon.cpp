#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
        int a[4];
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        int cn=0;
        int m=a[0];
        for(int i=1;i<4;i++){
            if(a[i]>m){
                cn++;
            }
        }
        cout<<cn<<endl;
    }


    return 0;
}