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
        long long n,k;
        cin>>n>>k;
        string s;   cin>>s;
        int sm[26],cp[26];
        for(int i=0;i<26;i++){
            sm[i]=0;
            cp[i]=0;
        }
        
        for(long long i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
               sm[s[i]-97]++; 
            }
            else{
                cp[s[i]-65]++;
            }
        }
        long long ans=0,rem=0;
        for(long long i=0;i<26;i++){
            ans=ans+min(sm[i],cp[i]);
            sm[i]=abs(sm[i]-cp[i]);
            rem=rem+sm[i]/2;
        }
        ans=ans+min(rem,k);
        cout<<ans<<endl;
    }
    return 0;
}