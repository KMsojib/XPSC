//not accepted..


#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a,b,t;
    cin>>a>>b>>t;
    
    /*float T=t+0.5;
    int time=0,sum=0;
    for(int i=1;i<=a;i++){
        time+=a;
        if(time>T){
            break;
        }
        if(time<T){
            sum+=b;
        }
    }
    cout<<sum<<endl;
    */
   int T_sum=t/a;
   int ans=T_sum*b;
   cout<<ans<<endl;
    return 0;
}