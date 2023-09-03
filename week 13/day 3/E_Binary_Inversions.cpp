#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>a(n);
        int fz=-1,lo=-1;
        ll cn=0;
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                lo=i;
                cn++;
            }else{
                if(fz==-1){
                    fz=i;
                }
                sum+=cn;
            }
        }
        ll s2=0;
        if(fz>=0){
            a[fz]=1;
            cn=0;
            for(int i=0;i<n;i++){
                if(a[i]==1){
                    cn++;
                }
                else{
                    s2+=cn;
                }
            }
            sum=max(sum,s2);
            a[fz]=0;
        }
        ll s3=0;
        if(lo>=0){
            a[lo]=0;
            cn=0;
            for(int i=0;i<n;i++){
                if(a[i]==1){
                    cn++;
                }
                else{
                    s3+=cn;
                }
            }
            sum=max(sum,s3);
        }
        cout<<sum<<endl;
    }
    return 0;
}
//brute force solution:
//https://codeforces.com/problemset/status?my=on
//not accepted
/*
    BTW if we think little wider we can find that we have to work for three cases only 
1st case is without changing the binary array.
2nd case just change the fist zero to one.
3rd case is change last one to zero .

2nd and 3rd are the cases that will contain the maximum answer rather than checking for each index. 
Hope you get it!
*/