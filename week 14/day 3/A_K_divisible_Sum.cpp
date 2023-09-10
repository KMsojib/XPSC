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
        int n,k;    cin>>n>>k;
        if(n==k){
            cout<<1<<endl;
        }
        else if(n>k)
        {
            if(n%k==0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else
        {
            long long s=k/n;
            if(k%n)
            {
                s++;
            }
            cout<<s<<endl;
        }
    }
    
    return 0;
}