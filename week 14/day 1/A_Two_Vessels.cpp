#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        double a,b,c;  cin>>a>>b>>c;
        if(a==b){
            cout<<"0\n";
            continue;
        }
        if((a+b<c)){
            cout<<"1\n";
            continue;
        }
        int cn=0;
        if(a>b){
            while (a>b){
                if(b>a){
                    break;
                }
               a-=c;
               b+=c;
               cn++;
            }
        }
        else{
            while (b>a)
            {
                if(a>b){
                    break;
                }
                b-=c;
                a+=c;
                cn++;
            } 
        }
        cout<<cn<<"\n";
    }

    return 0;
}