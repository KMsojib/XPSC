#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tt; cin>>tt;
    while (tt--)
    {
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;

        int ab=0,ac=0,bc=0;
        ab=abs(x2-x1)+abs(y2-y1)-1+2;
        bc=abs(x2-x3)+abs(y2-y3)-1+2;
        ac=abs(x1-x3)+abs(y1-y3)-1+2;

        if(bc == ab + ac-1)
            cout<<1<<endl;
        else{
            ll rem=ab+ac-bc;
            ll p=(rem-1)/2;
            cout<<p+1<<endl;
        }
    }
    
    return 0;
}