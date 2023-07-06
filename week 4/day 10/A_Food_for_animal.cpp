#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;  
    cin>>t;
    while (t--)
    {
        /* code */
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        int s1=(x-a);
        int s2=(y-b);
        s1=max(0,s1);
        s2=max(0,s2);
        if(s1+s2<=c){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}