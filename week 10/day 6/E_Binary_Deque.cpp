/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

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
        int n,s;    cin>>n>>s;
        int crn=0,temp=-1;;
        vector<int>a(n);
        int i=0,j=0;
        for( i=0, j=0;i<n;i++){
            cin>>a[i];
            crn+=a[i];
            if(crn>s){
                crn-=a[j++];
                //cout<<"Crn : "<<crn<<": ";
            }
            if(crn == s){
                temp=max(temp,i-j+1);
                //cout<<" temp :"<<temp<<endl;
            }
            //cout<<"Crn: "<<crn<<" :"<<" temp : "<<temp<<endl;
        }
        int ans=n-temp;
        if(temp<s || (n-temp)>n){
            ans=-1;
        }
        //cout<<" n-temp: "<<n-temp<<endl;
        cout<<ans<<endl;
    }

    return 0;
}