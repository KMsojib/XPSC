///sheet problem 6
//binary cafe

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);   

    int t;  cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        int i=(log2(n));
        //2^i coin
        //i=log2(n)//
        if(i<k){
            cout<<n+1<<endl;
        }else{
            int p=(int)pow(2,k);
            cout<<p<<endl;
        }
    }
    return 0;
}