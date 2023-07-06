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
        long long n;  cin>>n;
        vector<long long>s(n),f(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            cin>>f[i];
        }
        cout<<f[0]-s[0]<<" ";
        for(int i=1;i<n;i++)
        {
            if(f[i-1]>s[i]){
                cout<<f[i]-f[i-1]<<" ";
            }
            else{
                cout<<f[i]-s[i]<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}