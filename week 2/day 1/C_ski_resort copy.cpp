#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);   
    int t;cin>>t;
    while(t--)
    {
        long long n, k,q;
        cin>>n>>k>>q;
        
        long long a[n];
        for(int i=0;i<n;i++){cin>>a[i];}

        long long h[n];
        for(int i=0;i<n;i++){
            if(a[i]>q){
                h[i]=0;
            }
            else{
                if(i==0){
                    h[i]=1;
                }
                else{
                    h[i]=h[i-1]+1;
                }
            }
        }
        long long T_sum=0;
        for(int i=0;i<n;i++){
            h[i]=h[i]-(k-1);
            if(h[i]>0){
                //ans = ans+h[i];
                T_sum+=h[i];
            }
        }
        cout<<T_sum<<endl;
    }

    return 0;
}