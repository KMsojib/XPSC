#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;   cin>>test;
    while(test--)
    {
        int n;  cin>>n;
        string s;   cin>>s;
        long long a[n];
        long long ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L') ans+=i;
            else ans+=n-i-1;

            if(s[i]=='L'){
                //convert to right
                a[i]=n-i-1-(i);
            }
            else{
                //convert to left
                a[i]=i-(n-i-1);
            }
        }
        sort(a,a+n);
        reverse(a,a+n);

        for(int i=0;i<n;i++){
            if(a[i]>0){
                ans=ans+a[i];
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}