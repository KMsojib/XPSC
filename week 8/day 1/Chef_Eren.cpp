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
        int n,a,b;
        cin>>n>>a>>b;
        int sum=0;
        for(int i=1;i<=n;i++){
            if(i&1 != 0)
                sum+=a;
            else
                sum+=b;
        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}