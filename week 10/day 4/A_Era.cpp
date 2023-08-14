/*
    aproach: if element vlaue is greater then index then 
        (i) ans+=a[i]-index;
    
    example: 
        n=  3
        el= 1 3 3
        in: 1 2 3
        1<=1 ok
        3>2 : ans+=3-2=1, ans=1;
        3<=2 ok
    so our ans =1

*/
/*
    Creator:
    Name: MD.Kawsar Mahmud
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);   

    int tt; cin>>tt;
    while(tt--)
    {
        int n;  cin>>n;
        int a[n+4];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        
        ll ans=a[1]-1;
        ll index=ans;
        for(int i=2;i<=n;i++)
        {
            if(index+i<a[i])
            {
                ll rem=a[i]-(index+i);
                index+=rem;
                ans+=rem;
            }
        }
       cout<<ans<<endl;
    }

    return 0;
}